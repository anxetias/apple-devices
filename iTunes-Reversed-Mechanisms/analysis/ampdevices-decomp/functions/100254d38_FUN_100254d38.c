// name: FUN_100254d38
// address: 100254d38

void FUN_100254d38(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_48 [16];
  int local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  FUN_100249ed4(local_48,param_1 + 0xb0);
  FUN_100249ed4(local_38,param_1 + 0x538);
  FUN_100249ed4(local_28,param_1 + 0x978);
  cVar1 = FUN_10024aa49(param_2,local_48);
  if ((cVar1 != '\0') &&
     ((*(int *)(param_1 + 8) == 0 || (cVar1 = FUN_10024aa49(local_38,local_48), cVar1 != '\0')))) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
  if ((((local_38[0] == 0x73766d64) &&
       (cVar1 = FUN_100168311(CONCAT44(uStack_2c,local_30)), cVar1 == '\0')) ||
      ((local_38[0] == 0x73766970 && (local_30._3_1_ != '\0')))) &&
     (cVar1 = FUN_10024abfd(local_38,local_48), cVar1 != '\0')) {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = 2;
    }
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
    if (((((local_28[0] == 0x73766d64) &&
          (cVar1 = FUN_100168311(CONCAT44(uStack_1c,local_20)), cVar1 == '\0')) ||
         ((local_28[0] == 0x73766970 && (local_20._3_1_ != '\0')))) &&
        (cVar1 = FUN_10024aa49(param_2,local_28), cVar1 == '\0')) ||
       (((local_28[0] != 0x73766d64 ||
         (cVar1 = FUN_100168311(CONCAT44(uStack_1c,local_20)), cVar1 != '\0')) &&
        ((local_28[0] != 0x73766970 || (local_20._3_1_ == '\0')))))) {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfb;
    }
  }
  FUN_100249fca(local_28);
  FUN_100249fca(local_38);
  FUN_100249fca(local_48);
  return;
}

