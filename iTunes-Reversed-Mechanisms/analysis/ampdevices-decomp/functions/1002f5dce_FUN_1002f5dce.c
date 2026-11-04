// name: FUN_1002f5dce
// address: 1002f5dce

void FUN_1002f5dce(cfstringStruct *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  if ((param_2 == (undefined8 *)0x0) || (cVar3 = FUN_100170633(param_1,*param_2), cVar3 != '\0')) {
    return;
  }
  uVar1 = FUN_1002f5d86(param_1);
  uVar4 = FUN_1002f5d86(*param_2);
  cVar3 = FUN_100170633(uVar1,uVar4);
  if (cVar3 == '\0') {
    cVar3 = FUN_100170633(uVar1,&cf_en);
    if ((cVar3 != '\0') || (cVar3 = FUN_100170633(uVar4,&cf_en), cVar3 == '\0')) goto LAB_1002f5e62;
    param_1 = &cf_en_US;
    cVar3 = FUN_100170633(*param_2,&cf_en_US);
    if (cVar3 != '\0') goto LAB_1002f5e62;
  }
  else if (param_1 == (cfstringStruct *)0x0) goto LAB_1002f5e62;
  uVar2 = FUN_1001705fc(param_1);
  FUN_10017060f(*param_2);
  *param_2 = uVar2;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
LAB_1002f5e62:
  FUN_10017060f(uVar1);
  FUN_10017060f(uVar4);
  return;
}

