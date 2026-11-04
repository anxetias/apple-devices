// name: FUN_100606010
// address: 100606010

char * FUN_100606010(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = FUN_1004744bf(param_1,0);
  if ((short)uVar1 < 0) {
    if ((uVar1 & 0x40) != 0) {
      return "TV show rental";
    }
    uVar1 = uVar1 & 2;
    pcVar3 = "rental";
    pcVar2 = "movie rental";
  }
  else {
    if ((uVar1 >> 0x10 & 1) != 0) {
      return "digital booklet";
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      return s_iTunes_U_1007f47cc;
    }
    if ((uVar1 & 4) != 0) {
      return "podcast";
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      return "ringtone";
    }
    if ((uVar1 >> 0x18 & 1) != 0) {
      return "alert tone";
    }
    if ((uVar1 & 0x402) != 0) {
      return "movie";
    }
    if ((uVar1 & 0x40) != 0) {
      return "TV show";
    }
    if ((uVar1 & 8) != 0) {
      return "audiobook";
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      return "book";
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      return "PDF book";
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      return "game";
    }
    uVar1 = uVar1 & 0x60000;
    pcVar3 = "music";
    pcVar2 = "app";
  }
  if (uVar1 == 0) {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}

