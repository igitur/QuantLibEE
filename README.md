QuantLibEE
==========

Debugging add-in for Visual Studio to display QuantLib classes better in the watch windows.

Based on instructions found on http://www.altdev.co/2011/06/22/extending-the-watch-window-in-visual-studio-via-eeaddin/

You'll have to fix the references to QuantLib and Boost. After compilation, copy the .dll to your 
`%ProgramFiles%\Microsoft Visual Studio 10.0\Common7\IDE\` directory and add this line to `autoexp.dat`:

`QuantLib::Date=$ADDIN(QuantLibEE.dll,AddIn_quantlibdate)`
