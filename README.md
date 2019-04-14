# ps-save-converter
Experimental PS3&lt;->PS Vita Save Converter

# Instructions (PS3 → PS Vita)
- Start a new game and save (if necessary)
- Copy your PS3 save to a USB drive
- Decrypt it with [Bruteforce Save Data](https://www.sendspace.com/file/l1zu5m) (compatible with [Wine](https://www.winehq.org/)) or a similar tool
- Use PS Save Converter to convert your save file (e.g. Ratchet & Clank: "USR-DATA")
- Rename the converted file (e.g. Ratchet & Clank: "USR-DATA-CONVERTED" to "RC1_SAVEDATA_1.bin")
- Copy the new file to your PS Vita
- Open VitaShell
- Copy the file
- Open ux0:user/00/savedata
- Highlight your game's save folder, press Δ, select Open decrypted
- Delete your old save file and paste the new one (you should back up your original save, just in case)

# Instructions (PS Vita → PS3)
- Start a new game and save (if necessary)
- Copy your PS3 save to a USB drive
- Open VitaShell
- Open ux0:user/00/savedata
- Highlight your game's save folder, press Δ, select Open decrypted
- Copy your save file (e.g. Ratchet & Clank: "RC1_SAVEDATA_1.bin") to ux0:data
- Copy the save file to your PC
- Use PS Save Converter to convert your save file
- Rename the converted file (e.g. Ratchet & Clank: "RC1_SAVEDATA_1.bin-CONVERTED" to "USR-DATA")
- Replace the save file on your USB drive (you should back up your original save, just in case)
- Restore your save from your USB drive

# Tested games
  Ratchet & Clank
