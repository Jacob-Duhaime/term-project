# The Trie Data Structure
Presented to you by: Angel Pichardo De La Cruz, Jacob Duhaime, Nicholas Faciano and Harry Grenier.
<br>
<h1>What is 'Trie'?</h1>

<p> Trie (pronounced <b>“Try”</b>, comes from the word <b>“retrieval”</b>) is a k-ary search tree data structure that is used for sophisticated types of data, such as strings. In this data structure, the links between the nodes are defined by individual characters from a string in which every child node is associated with its parent node. With Trie, you can do operations such as insertion, deletion and searching. A simplest way to explain this data structure is as an array of pointers to other nodes. Please look at the example below which depicts this: </p>

![](images/Trie_representation.png)
<i>Credits to Wikipedia article "Trie"</i>

<br>

<h2>More examples about Trie</h2>

<p>Hypothetically, let's state that we are using trie for a spell checker in which we are trying to find the correct spelling of a word. A user would input the word “Codign” (for coding). The data structure will spawn in the first node which will be for character “c”. Then it would make another node with the letter “o” while still being pointed at by the previous node. Then, another node is generated with the letter “d”, then letter “i”. By this point of having the characters “codi”, it can do a search for all possible words that start with those 4 characters like codify, coding, codirect…etc.from a database provided to it. Essentially, it would pull out all of the words in the dictionary that can be a match for the word that we are looking for. Please look example below which shows how Tire looks for the possible matches:</p>

