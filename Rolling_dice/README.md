# Dice Roller Game (C++)

A menu-driven command-line program written in C++ that simulates rolling different types of polyhedral dice (4, 6, 8, 10, 12, and 20-sided) using pseudo-random number generation.
<br>
<b>Features</b>
<ul>
<li><b>Multiple Dice Types:</b> Supports 4-sided, 6-sided, 8-sided, 10-sided, 12-sided, and 20-sided dice rolls.</li>
<li><b>Random Result Generation:</b> Generates fair random rolls each time using standard C++ random functions.</li>
<li><b>Interactive Menu Loop:</b> Uses a `do-while` loop combined with a `switch` statement so the game stays open until the user exits.</li>
<li><b>Input Validation:</b> Handles invalid menu choices gracefully using a `default` case.</li>
</ul>
<br>
<b>Understanding `ctime`, `srand()`, and `rand()`</b>
<ul>
<li><b>`&lt;ctime&gt;':</b> Used to get the current calendar time.</li>
Note that `srand()` and `rand()` are part of the <code>&lt;cstdlib&gt;</code> library. While some C++ compilers automatically include it via <code>&lt;iostream&gt;</code>, it is best practice to explicitly add <code>#include &lt;cstdlib&gt;</code> at the top of your file. Otherwise you might get compilation error.
<li><b>`srand()`:</b> A random number generator initializer that takes a starting value called a seed.</li>
<li><b>`rand()`:</b> Generates a random number. We pass the current time from `&lt;ctime&gt;` as the seed to `srand()` so the random numbers change every time you run the program.</li>
</ul>
<b>C++ Concepts Applied</b>
<ul>
<li><b>Header Inclusion:</b> Using `#include &lt;iostream&gt;` for I/O operations and `#include &lt;ctime&gt;` for time-based random seeding.</li>
<li><b>Random Number Generation:</b> Utilizing `srand()` and `rand()` to produce dynamic die roll values.</li>
<li><b>Control Flow:</b> Combining a `do-while` loop with a `switch` statement for clear menu branching logic.</li>
<li><b>Standard Console I/O:</b> Using `std::cout` and `std::cin` for input and output formatting.</li>
</ul>

<br>

