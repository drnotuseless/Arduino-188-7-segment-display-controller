import tkinter as tk
from tkinter import ttk

class ThreeSevenSegmentDisplaysApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Three 7-Segment Displays")
        
        # Define the segments for each display
        self.segment_names = {
            # Left display
            'SGB1': (160, 40, 190, 140),
            'SGC1': (160, 160, 190, 260),
            
            'SGA2': (250, 10, 350, 40),  # Middle display
            'SGB2': (360, 40, 390, 140),
            'SGC2': (360, 160, 390, 260),
            'SGD2': (250, 260, 350, 290),
            'SGE2': (210, 160, 240, 260),
            'SGF2': (210, 40, 240, 140),
            'SGG2': (250, 140, 350, 160),
            
            'SGA3': (450, 10, 550, 40),  # Right display
            'SGB3': (560, 40, 590, 140),
            'SGC3': (560, 160, 590, 260),
            'SGD3': (450, 260, 550, 290),
            'SGE3': (410, 160, 440, 260),
            'SGF3': (410, 40, 440, 140),
            'SGG3': (450, 140, 550, 160),
        }
        self.segment_states = {name: False for name in self.segment_names}  # Track state (on/off)
        self.segment_buttons = {}

        # Create Canvas for Display Layout
        self.canvas = tk.Canvas(self.root, width=600, height=300, bg='white')
        self.canvas.pack(pady=10)

        # Draw segments for all displays
        for name, (x1, y1, x2, y2) in self.segment_names.items():
            self.segment_buttons[name] = self.canvas.create_rectangle(
                x1, y1, x2, y2, fill='gray', outline='black'
            )
            self.canvas.tag_bind(self.segment_buttons[name], '<Button-1>', lambda e, seg=name: self.toggle_segment(seg))

        # Output text area
        self.output_label = ttk.Label(self.root, text="Selected Segments:")
        self.output_label.pack()
        self.output_text = tk.Text(self.root, height=2, width=50, state='disabled')
        self.output_text.pack()

    def toggle_segment(self, segment):
        """Toggle a segment's state."""
        self.segment_states[segment] = not self.segment_states[segment]

        # Update segment color
        new_color = 'red' if self.segment_states[segment] else 'gray'
        self.canvas.itemconfig(self.segment_buttons[segment], fill=new_color)

        # Update output text
        self.update_output()

    def update_output(self):
        """Update the output text area with selected segments."""
        selected_segments = [name for name, state in self.segment_states.items() if state]
        self.output_text.config(state='normal')
        self.output_text.delete('1.0', tk.END)
        self.output_text.insert('1.0', ' '.join(selected_segments))
        self.output_text.config(state='disabled')


if __name__ == "__main__":
    root = tk.Tk()
    app = ThreeSevenSegmentDisplaysApp(root)
    root.mainloop()
