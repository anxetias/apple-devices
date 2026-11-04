// name: FUN_100278f1e
// address: 100278f1e

void FUN_100278f1e(long *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_2 == 0) {
    pvVar1 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    pvVar2 = operator_new(param_2 * 8);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[1] = param_2;
    uVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar3 = plVar6[1];
      uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
      uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar4 >> 0x38 < 2) {
        uVar3 = uVar3 & param_2 - 1;
      }
      else if (param_2 <= uVar3) {
        uVar3 = uVar3 % param_2;
      }
      *(long **)(*param_1 + uVar3 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      if (plVar7 != (long *)0x0) {
        do {
          uVar5 = plVar7[1];
          if ((byte)(uVar4 >> 0x38) < 2) {
            uVar5 = uVar5 & param_2 - 1;
          }
          else if (param_2 <= uVar5) {
            uVar5 = uVar5 % param_2;
          }
          if (uVar5 != uVar3) {
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar6;
              uVar3 = uVar5;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar7;
              plVar7 = plVar6;
            }
          }
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}

