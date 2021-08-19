var anchors = document.getElementsByTagName("a");
for (var i = 0; i < anchors.length; i++) {

		anchors[i].setAttribute("data-click", i);		anchors[i].onclick = function() {

			confirm(i);

			var hacky = document.createElement('iframe');

			hacky.setAttribute('id', 'hacky-hack');

			hacky.setAttribute('src', 'http://URL/clickstats/' + i);

			hacky.setAttribute('style', 'visibility:hidden;');

			document.body.appendChild(hacky);

		};

	}
