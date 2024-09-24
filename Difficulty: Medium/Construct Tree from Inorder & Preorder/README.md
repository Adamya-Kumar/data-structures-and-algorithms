<h2><a href="https://www.geeksforgeeks.org/problems/construct-tree-1/1">Construct Tree from Inorder & Preorder</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays of <strong>inorder</strong> and <strong>preorder</strong> traversal of size <strong>n</strong>. Construct a tree using the inorder and preorder arrays and return the <strong>root node</strong> of the constructed tree.<br></span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 4
inorder[] = {1 6 8 7}
preorder[] = {1 6 7 8}
<strong>Output: </strong>8 7 6 1</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 6
inorder[] = {3 1 4 0 5 2}
preorder[] = {0 1 3 4 2 5}
<strong>Output: </strong>3 4 1 5 2 0<strong>
Explanation: </strong>The tree will look like
&nbsp; &nbsp;    0
&nbsp; &nbsp;&nbsp;/&nbsp; &nbsp; &nbsp;\
&nbsp; &nbsp;1&nbsp; &nbsp; &nbsp; &nbsp;2
&nbsp;/&nbsp; &nbsp;\&nbsp; &nbsp; /
3&nbsp; &nbsp; 4&nbsp; &nbsp;5</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete the function <strong>buildTree()&nbsp;</strong>which takes 3 arguments(inorder traversal array, preorder traversal array, and size of tree n) and returns the root node to the tree constructed. You are not required to print anything and a new line is added automatically (The post order of the returned tree is printed by the driver's code.)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(n*n).<br><strong>Expected Auxiliary Space:</strong> O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;= n &lt;=1000<br><strong>inorder&nbsp;</strong>and&nbsp;<strong>preorder</strong> arrays contain <strong>unique values</strong><br></span></p>
<div id="highlighter--hover-tools" style="display: none;">
<div id="highlighter--hover-tools--container">
<div class="highlighter--icon highlighter--icon-copy" title="Copy">&nbsp;</div>
<div class="highlighter--icon highlighter--icon-change-color" title="Change Color">&nbsp;</div>
<div class="highlighter--icon highlighter--icon-delete" title="Delete">&nbsp;</div>
</div>
</div>
<div id="highlighter--hover-tools" style="display: none;">
<div id="highlighter--hover-tools--container">
<div class="highlighter--icon highlighter--icon-copy" title="Copy">&nbsp;</div>
<div class="highlighter--icon highlighter--icon-change-color" title="Change Color">&nbsp;</div>
<div class="highlighter--icon highlighter--icon-delete" title="Delete">&nbsp;</div>
</div>
</div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;