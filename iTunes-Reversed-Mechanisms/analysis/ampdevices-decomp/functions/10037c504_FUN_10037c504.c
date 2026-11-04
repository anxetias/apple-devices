// name: FUN_10037c504
// address: 10037c504

void FUN_10037c504(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong in_RAX;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX & 0xffffffffffffff;
  uVar1 = *param_2;
  if (uVar1 < 0x71) {
    return;
  }
  switch(uVar1) {
  case 0x73:
    lVar2 = FUN_1004909fc(param_1 + 8);
    if (lVar2 == 0) {
      uVar1 = *param_2;
    }
    else {
      uVar1 = FUN_1004926ee(lVar2,0);
      *param_2 = uVar1;
    }
    if (uVar1 == 0) goto switchD_10037c53c_caseD_79;
    break;
  case 0x74:
    *param_2 = 0x78;
    goto LAB_10037c598;
  case 0x75:
switchD_10037c53c_caseD_75:
    *param_2 = 4;
    return;
  case 0x76:
    lVar2 = FUN_1004909fc(param_1 + 8);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x240) & 2) != 0)) goto switchD_10037c53c_caseD_75;
  case 0x79:
    goto switchD_10037c53c_caseD_79;
  }
  if (uVar1 == 0x77) {
    lVar2 = FUN_1004909fc(param_1 + 8);
    if (lVar2 != 0) {
      uVar1 = FUN_100492887(lVar2,(long)&uStack_28 + 7);
LAB_10037c5d4:
      *param_2 = uVar1;
      if (param_3 == (uint *)0x0) {
        return;
      }
      uVar1 = *param_3;
      if ((uVar1 & 1) == 0) {
        if (uStack_28._7_1_ == '\0') {
          return;
        }
        uVar1 = uVar1 | 1;
      }
      else {
        if (uStack_28._7_1_ == '\0') {
          return;
        }
        uVar1 = uVar1 & 0xfffffffe;
      }
      *param_3 = uVar1;
      return;
    }
  }
  else {
    if (uVar1 != 0x78) {
      return;
    }
LAB_10037c598:
    lVar2 = FUN_1004909fc(param_1 + 8);
    if (lVar2 != 0) {
      uVar1 = FUN_1004926ee(lVar2,(long)&uStack_28 + 7);
      goto LAB_10037c5d4;
    }
  }
switchD_10037c53c_caseD_79:
  *param_2 = 1;
  return;
}

