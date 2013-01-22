while true
  puts `/usr/bin/osascript getapp`.delete("\n") + " || " + `./a.out`
  sleep 1
end

