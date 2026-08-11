<h2><a href="https://codeforces.com/contest/1166/problem/A" target="_blank" rel="noopener noreferrer">1166A — Silent Classroom</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1166A](https://codeforces.com/contest/1166/problem/A) |

## Topics
`combinatorics` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Silent Classroom</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ students in the first grade of Nlogonia high school. The principal wishes to split the students into two classrooms (each student must be in exactly one of the classrooms). Two distinct students whose name starts with the same letter will be chatty if they are put in the same classroom (because they must have a lot in common). Let $$$x$$$ be the number of such pairs of students in a split. Pairs $$$(a, b)$$$ and $$$(b, a)$$$ are the same and counted only once.</p><p>For example, if there are $$$6$$$ students: "<span class="tex-font-style-tt">olivia</span>", "<span class="tex-font-style-tt">jacob</span>", "<span class="tex-font-style-tt">tanya</span>", "<span class="tex-font-style-tt">jack</span>", "<span class="tex-font-style-tt">oliver</span>" and "<span class="tex-font-style-tt">jessica</span>", then:</p><ul> <li> splitting into two classrooms ("<span class="tex-font-style-tt">jack</span>", "<span class="tex-font-style-tt">jacob</span>", "<span class="tex-font-style-tt">jessica</span>", "<span class="tex-font-style-tt">tanya</span>") and ("<span class="tex-font-style-tt">olivia</span>", "<span class="tex-font-style-tt">oliver</span>") will give $$$x=4$$$ ($$$3$$$ chatting pairs in the first classroom, $$$1$$$ chatting pair in the second classroom), </li><li> splitting into two classrooms ("<span class="tex-font-style-tt">jack</span>", "<span class="tex-font-style-tt">tanya</span>", "<span class="tex-font-style-tt">olivia</span>") and ("<span class="tex-font-style-tt">jessica</span>", "<span class="tex-font-style-tt">oliver</span>", "<span class="tex-font-style-tt">jacob</span>") will give $$$x=1$$$ ($$$0$$$ chatting pairs in the first classroom, $$$1$$$ chatting pair in the second classroom). </li></ul><p>You are given the list of the $$$n$$$ names. What is the minimum $$$x$$$ we can obtain by splitting the students into classrooms?</p><p>Note that it is valid to place all of the students in one of the classrooms, leaving the other one empty.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1\leq n \leq 100$$$) — the number of students.</p><p>After this $$$n$$$ lines follow.</p><p>The $$$i$$$-th line contains the name of the $$$i$$$-th student.</p><p>It is guaranteed each name is a string of lowercase English letters of length at most $$$20$$$. Note that multiple students may share the same name.</p></div><div class="output-specification"><div class="section-title">Output</div><p>The output must consist of a single integer $$$x$$$ — the minimum possible number of chatty pairs.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017583355237228893" id="id008792169272739389" class="input-output-copier">Copy</div></div><pre id="id0017583355237228893">4
jorge
jose
oscar
jerry
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009590798020679716" id="id0001177959566402531" class="input-output-copier">Copy</div></div><pre id="id009590798020679716">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005529161341805534" id="id0007651110317961984" class="input-output-copier">Copy</div></div><pre id="id005529161341805534">7
kambei
gorobei
shichiroji
kyuzo
heihachi
katsushiro
kikuchiyo
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008090315028003716" id="id0044748544597634354" class="input-output-copier">Copy</div></div><pre id="id008090315028003716">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005251875463330872" id="id0008508631055504845" class="input-output-copier">Copy</div></div><pre id="id005251875463330872">5
mike
mike
mike
mike
mike
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007524640929974569" id="id0028859162925231097" class="input-output-copier">Copy</div></div><pre id="id0007524640929974569">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample the minimum number of pairs is $$$1$$$. This can be achieved, for example, by putting everyone except <span class="tex-font-style-tt">jose</span> in one classroom, and <span class="tex-font-style-tt">jose</span> in the other, so <span class="tex-font-style-tt">jorge</span> and <span class="tex-font-style-tt">jerry</span> form the only chatty pair.</p><p>In the second sample the minimum number of pairs is $$$2$$$. This can be achieved, for example, by putting <span class="tex-font-style-tt">kambei</span>, <span class="tex-font-style-tt">gorobei</span>, <span class="tex-font-style-tt">shichiroji</span> and <span class="tex-font-style-tt">kyuzo</span> in one room and putting <span class="tex-font-style-tt">heihachi</span>, <span class="tex-font-style-tt">katsushiro</span> and <span class="tex-font-style-tt">kikuchiyo</span> in the other room. In this case the two pairs are <span class="tex-font-style-tt">kambei</span> and <span class="tex-font-style-tt">kyuzo</span>, and <span class="tex-font-style-tt">katsushiro</span> and <span class="tex-font-style-tt">kikuchiyo</span>.</p><p>In the third sample the minimum number of pairs is $$$4$$$. This can be achieved by placing three of the students named <span class="tex-font-style-tt">mike</span> in one classroom and the other two students in another classroom. Thus there will be three chatty pairs in one classroom and one chatty pair in the other classroom.</p></div>