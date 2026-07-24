<h2><a href="https://codeforces.com/contest/1144/problem/A" target="_blank" rel="noopener noreferrer">1144A — Diverse Strings</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1144A](https://codeforces.com/contest/1144/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Diverse Strings</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A string is called <span class="tex-font-style-it">diverse</span> if it contains consecutive (adjacent) letters of the Latin alphabet and each letter occurs exactly once. For example, the following strings are diverse: "<span class="tex-font-style-tt">fced</span>", "<span class="tex-font-style-tt">xyz</span>", "<span class="tex-font-style-tt">r</span>" and "<span class="tex-font-style-tt">dabcef</span>". The following string are <span class="tex-font-style-bf">not</span> diverse: "<span class="tex-font-style-tt">az</span>", "<span class="tex-font-style-tt">aa</span>", "<span class="tex-font-style-tt">bad</span>" and "<span class="tex-font-style-tt">babc</span>". Note that the letters '<span class="tex-font-style-tt">a</span>' and '<span class="tex-font-style-tt">z</span>' are not adjacent.</p><p>Formally, consider positions of all letters in the string in the alphabet. These positions should form contiguous segment, i.e. they should come one by one without any gaps. And all letters in the string should be distinct (duplicates are not allowed).</p><p>You are given a sequence of strings. For each string, if it is diverse, print "<span class="tex-font-style-tt">Yes</span>". Otherwise, print "<span class="tex-font-style-tt">No</span>".</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer $$$n$$$ ($$$1 \le n \le 100$$$), denoting the number of strings to process. The following $$$n$$$ lines contains strings, one string per line. Each string contains only lowercase Latin letters, its length is between $$$1$$$ and $$$100$$$, inclusive.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n$$$ lines, one line per a string in the input. The line should contain "<span class="tex-font-style-tt">Yes</span>" if the corresponding string is diverse and "<span class="tex-font-style-tt">No</span>" if the corresponding string is not diverse. You can print each letter in any case (upper or lower). For example, "<span class="tex-font-style-tt">YeS</span>", "<span class="tex-font-style-tt">no</span>" and "<span class="tex-font-style-tt">yES</span>" are all acceptable.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023927409946088907" id="id009898805308225694" class="input-output-copier">Copy</div></div><pre id="id0023927409946088907">8
fced
xyz
r
dabcef
az
aa
bad
babc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001265155791670881" id="id008957548740113962" class="input-output-copier">Copy</div></div><pre id="id001265155791670881">Yes
Yes
Yes
Yes
No
No
No
No
</pre></div></div></div>