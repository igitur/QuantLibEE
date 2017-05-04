QuantLibEE
==========

Debugging add-in for Visual Studio to display QuantLib classes better in the watch windows.

Based on instructions found on http://www.altdev.co/2011/06/22/extending-the-watch-window-in-visual-studio-via-eeaddin/

You'll have to fix the references to QuantLib and Boost. After compilation, copy the .dll to your 
`%ProgramFiles%\Microsoft Visual Studio 10.0\Common7\IDE\` directory and add this line to `autoexp.dat`:

`QuantLib::Date=$ADDIN(QuantLibEE.dll,AddIn_quantlibdate)`

For VS 2012/2013 
================

VS2012 dropped the use of autoexp.dat; 
however, you can still use existing add-ins through the new mechanism - an XML natvis file.
Create a file qdate.natvis in `%ProgramFiles%\Microsoft Visual Studio 11.0\Common7\Packages\Debugger\Visualizers` directory
like this :

<?xml version="1.0" encoding="utf-8"?>

  <AutoVisualizer xmlns="http://schemas.microsoft.com/vstudio/debugger/natvis/2010">

    <Type Name="QuantLib::Date">

      <DisplayString LegacyAddin="%ProgramFiles%\Microsoft Visual Studio 11.0\Common7\IDE\QuantLibEE.dll"

                     Export="AddIn_quantlibdate">

      </DisplayString>

    </Type>

</AutoVisualizer>

