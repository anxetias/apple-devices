// name: FUN_10022b36a
// address: 10022b36a

byte FUN_10022b36a(char *param_1,char *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  switch(param_3) {
  case 1:
    if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
         ((param_1[5] == param_2[5] && ((param_1[8] == param_2[8] && (param_1[6] == param_2[6]))))))
        && (param_1[7] == param_2[7])))) {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x10);
      if (lVar3 - lVar2 == *(long *)(param_2 + 0x18) - lVar4) {
        if (lVar2 != lVar3) {
          lVar8 = 0;
          bVar5 = 0;
          do {
            if ((*(char *)(lVar2 + lVar8) != *(char *)(lVar4 + lVar8)) ||
               (*(long *)(lVar2 + 4 + lVar8) != *(long *)(lVar4 + 4 + lVar8))) goto LAB_10022b64f;
            lVar1 = lVar2 + lVar8;
            lVar8 = lVar8 + 0xc;
          } while (lVar1 + 0xc != lVar3);
          goto LAB_10022b677;
        }
LAB_10022b6e0:
        bVar5 = 0;
        goto LAB_10022b677;
      }
    }
    break;
  case 2:
    if (((param_1[0x28] == param_2[0x28]) && (param_1[0x29] == param_2[0x29])) &&
       ((param_1[0x2a] == param_2[0x2a] && (param_1[0x2b] == param_2[0x2b])))) {
      lVar2 = *(long *)(param_1 + 0x30);
      lVar3 = *(long *)(param_1 + 0x38);
      lVar4 = *(long *)(param_2 + 0x30);
      if (lVar3 - lVar2 == *(long *)(param_2 + 0x38) - lVar4) {
        if (lVar2 != lVar3) {
          lVar8 = 0;
          bVar5 = 0;
          do {
            if ((*(char *)(lVar2 + lVar8) != *(char *)(lVar4 + lVar8)) ||
               (*(long *)(lVar2 + 4 + lVar8) != *(long *)(lVar4 + 4 + lVar8))) goto LAB_10022b64f;
            lVar1 = lVar2 + lVar8;
            lVar8 = lVar8 + 0xc;
          } while (lVar1 + 0xc != lVar3);
          goto LAB_10022b677;
        }
        goto LAB_10022b6e0;
      }
    }
    break;
  case 3:
    if ((((param_1[0x48] == param_2[0x48]) && (param_1[0x49] == param_2[0x49])) &&
        (param_1[0x4a] == param_2[0x4a])) && (param_1[0x4b] == param_2[0x4b])) {
      lVar2 = *(long *)(param_1 + 0x50);
      lVar3 = *(long *)(param_1 + 0x58);
      lVar4 = *(long *)(param_2 + 0x50);
      if (lVar3 - lVar2 == *(long *)(param_2 + 0x58) - lVar4) {
        if (lVar2 != lVar3) {
          lVar8 = 0;
          bVar5 = 0;
          do {
            if ((*(char *)(lVar2 + lVar8) != *(char *)(lVar4 + lVar8)) ||
               (*(long *)(lVar2 + 4 + lVar8) != *(long *)(lVar4 + 4 + lVar8))) goto LAB_10022b64f;
            lVar1 = lVar2 + lVar8;
            lVar8 = lVar8 + 0xc;
          } while (lVar1 + 0xc != lVar3);
          goto LAB_10022b677;
        }
        goto LAB_10022b6e0;
      }
    }
    break;
  case 4:
    bVar5 = 1;
    if ((((((param_1[0x68] == param_2[0x68]) && (param_1[0x69] == param_2[0x69])) &&
          (param_1[0x6a] == param_2[0x6a])) &&
         ((param_1[0x6b] == param_2[0x6b] && (param_1[0x70] == param_2[0x70])))) &&
        (param_1[0x71] == param_2[0x71])) &&
       ((param_1[0x70] == '\0' ||
        ((cVar6 = FUN_1001a85de(param_1 + 0x78,param_2 + 0x78), cVar6 != '\0' &&
         (cVar6 = FUN_10017f77e(param_1 + 0x88,param_2 + 0x88), cVar6 != '\0')))))) {
      bVar5 = FUN_10022b6fc(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4b0),
                            *(undefined8 *)(param_2 + 0x4a8),*(undefined8 *)(param_2 + 0x4b0));
      bVar5 = bVar5 ^ 1;
    }
    goto LAB_10022b677;
  default:
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "false";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    bVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10022b677;
  }
LAB_10022b64f:
  bVar5 = 1;
LAB_10022b677:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar5;
}

