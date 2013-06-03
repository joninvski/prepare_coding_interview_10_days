---
layout: page
title: Prepare for coding interview in 10 days!
tagline: and hope for the best...
---
{% include JB/setup %}

## Purpose 

Recently had a contact for a job interview. Have 10 days to prepare for it. 
Armed with my [Coding Interviews: Questions, Analysis, & Solutions: Questions, Analysis & Solutions](http://www.amazon.co.uk/Coding-Interviews-Questions-Analysis-Solutions/dp/1430247614/ref=sr_1_2?ie=UTF8&qid=1370170951&sr=8-2&keywords=coding+interview) book this page will keep a summary of the study.


## Plan

<script type="text/javascript" src="//ajax.googleapis.com/ajax/static/modules/gviz/1.0/chart.js"> {"dataSourceUrl":"//docs.google.com/spreadsheet/tq?key=0Asa39xtpHa2HdHVHY09RMXdUTVYyWFhwSTRQLVlzbkE&transpose=0&headers=1&range=B6%3AC16&gid=0&pub=1","options":{"vAxes":[{"title":"Pages read","useFormatFromData":true,"minValue":null,"viewWindow":{"min":null,"max":null},"maxValue":null},{"useFormatFromData":true,"minValue":null,"viewWindow":{"min":null,"max":null},"maxValue":null}],"titleTextStyle":{"bold":true,"color":"#000","fontSize":16},"booleanRole":"certainty","title":"Read plan","animation":{"duration":0},"legend":"right","annotations":{"domain":{}},"hAxis":{"title":"Days","useFormatFromData":true,"minValue":null,"viewWindowMode":null,"viewWindow":null,"maxValue":null},"isStacked":false,"tooltip":{},"width":450,"height":320},"state":{},"view":{"columns":[{"calc":"emptyString","type":"string","sourceColumn":0},0,1]},"isDefaultVisualization":true,"chartType":"ColumnChart","chartName":"Chart1"} </script>

## Days

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{ BASE_PATH }}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>

## How to set up blog on github

Instructions for setting this blog on github are [here](http://joninvski.github.io/prepare_coding_interview_10_days/how_i_set_up_jekyll_on_github.html) 


## TODO

Check [TODO](http://joninvski.github.io/prepare_coding_interview_10_days/TODO)
