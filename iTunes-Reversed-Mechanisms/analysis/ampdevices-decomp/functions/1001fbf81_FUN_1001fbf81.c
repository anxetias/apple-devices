// name: FUN_1001fbf81
// address: 1001fbf81

undefined8 FUN_1001fbf81(long param_1,char *param_2,undefined8 param_3,short param_4)

{
  char cVar1;
  uint uVar2;
  
  if (*param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10);
    if ((uVar2 & 4) != 0) {
      cVar1 = FUN_1001824d7(param_2 + 0x30,param_3);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar2 & 8) == 0) || (param_2[2] == '\0')) {
      if (param_4 == 1 && (uVar2 & 0x10) != 0) {
        cVar1 = FUN_1001e4e7c("mimetype",param_3,0);
        if (cVar1 != '\0') {
          return 0;
        }
        cVar1 = FUN_1001e4e7c("iTunesArtwork",param_3,0);
        if ((cVar1 != '\0') && (param_2[2] != '\0')) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

