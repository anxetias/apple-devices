// name: FUN_1005cd830
// address: 1005cd830

void FUN_1005cd830(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_2a8 [2];
  long local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  undefined8 local_280;
  long *local_278;
  undefined8 local_270;
  long local_268;
  undefined8 local_260;
  long local_258;
  long local_250;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_250 = param_5[1] - *param_5;
  local_278 = param_5;
  local_270 = param_3;
  local_258 = param_2;
  if (local_250 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "objectCount > 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_260 = param_1;
    FUN_1004c6512(&local_280);
    local_268 = (local_250 >> 2) * -0x7f01fc07f01fc07f;
    local_268 = local_268 + (ulong)(local_268 == 0);
    local_240 = local_280;
    local_244 = 0x10cc01f7;
    if (param_4 == 0x10cc01f6) {
      local_244 = 0x10cc01e1;
    }
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *local_278;
      local_2a0 = lVar2 + lVar6;
      local_2a8[0] = 3;
      local_298 = local_270;
      local_290 = &local_238;
      FUN_1004c5ad0(*(undefined4 *)(lVar2 + 0x200 + lVar6));
      if (param_4 == 0x10cc01f6) {
        iVar1 = *(int *)(lVar2 + 0x200 + lVar6);
        uVar7 = 0x10cc01f6;
        if (iVar1 < -0x2b) {
          if (iVar1 < -0x17ff7ffd) {
            if (iVar1 == -0x17fffff5) {
              uVar7 = 0x10cc01f5;
            }
            else if (iVar1 == -0x17ffffca) {
              uVar7 = 0x10cc01e5;
            }
            else if (iVar1 == -0x17ffffc6) {
              uVar7 = 0x10cc01e6;
            }
          }
          else {
            switch(iVar1) {
            case -0x17ff7ffd:
              uVar7 = 0x10cc01e8;
              break;
            case -0x17ff7ffc:
              uVar7 = 0x10cc01e9;
              break;
            case -0x17ff7ff7:
              uVar7 = 0x10cc01ea;
              break;
            case -0x17ff7ff2:
              uVar7 = 0x10cc01eb;
              break;
            case -0x17ff7fee:
              uVar7 = 0x10cc01ec;
              break;
            case -0x17ff7fed:
              uVar7 = 0x10cc01ed;
              break;
            case -0x17ff7fec:
              uVar7 = 0x10cc01ee;
              break;
            case -0x17ff7feb:
              uVar7 = 0x10cc01ef;
              break;
            case -0x17ff7fea:
              uVar7 = 0x10cc01f0;
              break;
            case -0x17ff7fe9:
              uVar7 = 0x10cc01f1;
              break;
            case -0x17ff7fe8:
              uVar7 = 0x10cc01f2;
              break;
            case -0x17ff7fe7:
              uVar7 = 0x10cc01f3;
              break;
            case -0x17ff7fe6:
              uVar7 = 0x10cc01f4;
            }
          }
        }
        else if (iVar1 < -0x22) {
          if (iVar1 == -0x2b) {
LAB_1005cdaa4:
            uVar7 = 0x10cc01e4;
          }
          else if (iVar1 == -0x24) goto LAB_1005cda99;
        }
        else if (iVar1 == -0x22) {
          uVar7 = 0x10cc01e2;
        }
        else if (iVar1 == -0x13) {
LAB_1005cda99:
          uVar7 = 0x10cc01e3;
        }
        else if (iVar1 == -0x17) goto LAB_1005cdaa4;
      }
      else {
        uVar7 = param_4;
        if (param_4 == 0x10cc01f9) {
          uVar7 = *(int *)(lVar2 + 0x200 + lVar6) == -0x17fffff5 ^ 0x10cc01f9;
        }
      }
      if ((lVar5 == 1 && local_250 != 0x204) && ((param_4 == 0x10cc01f9 || (param_4 == 0x10cc01f6)))
         ) {
        FUN_1005cde7e(local_240,*(undefined4 *)(local_258 + 0x66b0),local_244,local_2a8,3);
      }
      FUN_1005cde7e(local_240,*(undefined4 *)(local_258 + 0x66b0),uVar7,local_2a8,0);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x204;
    } while (local_268 != lVar5);
    FUN_1001b7a44(&local_238);
    uVar4 = local_240;
    FUN_1005cd4e3(local_260,local_240,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1004c6565(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

