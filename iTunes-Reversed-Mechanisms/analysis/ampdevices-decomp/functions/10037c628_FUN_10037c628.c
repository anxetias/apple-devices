// name: FUN_10037c628
// address: 10037c628

void FUN_10037c628(undefined8 param_1,long param_2,uint *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  ulong in_RAX;
  char cVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX & 0xffffffffffffff;
  uVar2 = *param_3;
  if (uVar2 < 0x71) {
    return;
  }
  switch(uVar2) {
  case 0x73:
    iVar1 = FUN_1004926ee(param_2,0);
    uVar2 = iVar1 + (uint)(iVar1 == 0);
    *param_3 = uVar2;
    break;
  case 0x74:
    *param_3 = 0x78;
    goto LAB_10037c68f;
  case 0x76:
    if ((*(byte *)(param_2 + 0x240) & 2) == 0) goto switchD_10037c667_caseD_79;
  case 0x75:
    *param_3 = 4;
    return;
  case 0x79:
switchD_10037c667_caseD_79:
    *param_3 = 1;
    return;
  }
  if (uVar2 == 0x77) {
    uVar2 = FUN_100492887(param_2,(long)&uStack_28 + 7);
  }
  else {
    if (uVar2 != 0x78) {
      return;
    }
LAB_10037c68f:
    uVar2 = FUN_1004926ee(param_2,(long)&uStack_28 + 7);
  }
  *param_3 = uVar2;
  if (param_4 != (char *)0x0) {
    cVar3 = uStack_28._7_1_ == '\0';
    if (*param_4 == '\0') {
      cVar3 = uStack_28._7_1_;
    }
    *param_4 = cVar3;
  }
  return;
}

