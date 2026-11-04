// name: FUN_10034431c
// address: 10034431c

void FUN_10034431c(undefined8 param_1,uint param_2)

{
  char cVar1;
  undefined1 local_28 [16];
  
  FUN_1001b7a44();
  if (param_2 != 0) {
    if ((param_2 & 1) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_28,", ");
        FUN_1001bbcfe(param_1,local_28);
        FUN_1001b7a50(local_28);
      }
      FUN_1001b7b04(local_28,"Track");
      FUN_1001bbcfe(param_1,local_28);
      FUN_1001b7a50(local_28);
    }
    if ((param_2 & 2) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_28,", ");
        FUN_1001bbcfe(param_1,local_28);
        FUN_1001b7a50(local_28);
      }
      FUN_1001b7b04(local_28,"Artwork");
      FUN_1001bbcfe(param_1,local_28);
      FUN_1001b7a50(local_28);
    }
    if ((param_2 & 4) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_28,", ");
        FUN_1001bbcfe(param_1,local_28);
        FUN_1001b7a50(local_28);
      }
      FUN_1001b7b04(local_28,"Genius");
      FUN_1001bbcfe(param_1,local_28);
      FUN_1001b7a50(local_28);
    }
    if ((param_2 & 8) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_28,", ");
        FUN_1001bbcfe(param_1,local_28);
        FUN_1001b7a50(local_28);
      }
      FUN_1001b7b04(local_28,"Lyrics");
      FUN_1001bbcfe(param_1,local_28);
      FUN_1001b7a50(local_28);
    }
  }
  return;
}

