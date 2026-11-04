// name: FUN_100416406
// address: 100416406

undefined8 FUN_100416406(char *param_1,long *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_3 & 1) != 0) {
    uVar3 = FUN_10004d810(*(undefined4 *)(param_1 + 0x14));
    if ((int)uVar3 == -0xa4a9) {
      if ((*param_1 == '\x01') && (*(int *)(param_1 + 0x10) == 0)) {
        FUN_1004152d5(param_1 + 8,1);
      }
      *param_1 = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar3 = FUN_100415834(param_1,0);
    }
  }
  if (*param_2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = FUN_1001a8626(param_2);
    uVar2 = FUN_1001a8610(param_2);
    uVar3 = FUN_100052580(uVar1,uVar3,uVar2);
    return uVar3;
  }
  return uVar3;
}

