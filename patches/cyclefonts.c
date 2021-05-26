void
cyclefonts(const Arg *dummy)
{
	fonts_current++;
	if (fonts_current > (sizeof fonts / sizeof fonts[0]) - 1) {
		fonts_current = 0;
	}
	usedfont = fonts[fonts_current];
	xloadfonts(fonts[fonts_current], 0);
	redraw();
}

