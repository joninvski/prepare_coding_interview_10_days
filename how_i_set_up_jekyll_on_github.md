---
layout: page
title: Setup instructions
tagline: "Setup instructions"
---
{% include JB/setup %}

# Setup instructions

* Create the prepare\_coding\_interview\_10\_days reposiroty at github
* git clone "git@github.com:joninvski/prepare\_coding\_interview\_10\_days.git"
* git checkout --orphan gh-pages
* git remote  add jekyll git://github.com/plusjade/jekyll-bootstrap.git
* git fetch jekyll
* git merge jekyll/master
* edit \_config.yml

Edit the following configurations:

    title : Prepare to conding interview in 10 days
    tagline: Site Tagline
    author :
      name : Joao Trindade
      email : trindade.joao@gmail.com
      github : joninvski
      twitter : joaotrindade
      feedburner : feedname
    BASE\_PATH : http://joninvski.github.io/prepare\_coding\_interview\_10\_days
    production\_url : http://joninvski.github.io/prepare\_coding\_interview\_10\_days

* git push
* Open browser at: http://joninvski.github.io/prepare\_coding\_interview\_10\_days/
