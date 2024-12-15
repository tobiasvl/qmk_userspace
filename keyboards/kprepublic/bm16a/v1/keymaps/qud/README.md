# Caves of Qud

This is my numpad/macropad layout for _Caves of Qud_ (and potentially other roguelikes).

## Build

1. Run the normal `qmk setup` procedure if you haven't already done so -- see [QMK Docs](https://docs.qmk.fm/#/newbs) for details.
2. `qmk compile -kb kprepublic/bm16a/v1 -km qud`

![](https://i.imgur.com/CDsrFgd.jpeg)

## Layers

## Base layer

<table>
        <tr>
            <th>Header 1</th>
            <th>Header 2</th>
            <th>Header 3</th>
            <th>Header 4</th>
        </tr>
        <tr>
            <td>NW</td>
            <td>N</td>
            <td>NE</td>
            <td>Up</td>
        </tr>
        <tr>
            <td>W</td>
            <td>Wait</td>
            <td>E</td>
            <td>Down</td>
        </tr>
        <tr>
            <td>SW</td>
            <td>S</td>
            <td>SE</td>
            <td>Toggle sidebar</td>
        </tr>
        <tr>
            <td colspan="2">Auto-explore</td>
            <td>Wait 20</td>
            <td>Fn</td>
        </tr>
</table>

## Fn layer

<table>
        <tr>
            <td>Attack NW</td>
            <td>Attack N</td>
            <td>Attack NE</td>
            <td>Attack up</td>
        </tr>
        <tr>
            <td>Attack W</td>
            <td>Rest until healed</td>
            <td>Attack E</td>
            <td>Attack down</td>
        </tr>
        <tr>
            <td>Attack SW</td>
            <td>Attack S</td>
            <td>Attack SE</td>
            <td>Keyboard boot mode</td>
        </tr>
        <tr>
            <td colspan="2">Points of interest</td>
            <td>Wait 100</td>
            <td><br></td>
        </tr>
</table>
