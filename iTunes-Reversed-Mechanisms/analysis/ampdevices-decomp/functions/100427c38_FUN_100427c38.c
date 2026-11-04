// name: FUN_100427c38
// address: 100427c38

void FUN_100427c38(byte *param_1,char param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  undefined4 *param_7)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_270 [2];
  long local_268;
  undefined4 local_25c;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar4 = (uint)param_4;
  param_4 = param_4 & 0xffffffff;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_7 = 0;
  if (uVar4 != 0 && param_3 != 0) {
    uVar5 = param_6 & 0xffffffff;
    if ((byte)(param_2 - 1U) < 3) {
      puVar2 = local_258;
      local_268 = param_5;
      if (((int)uVar4 < 0x100) ||
         (puVar2 = (undefined1 *)FUN_1001c63e1(uVar4 * 2), puVar2 != (undefined1 *)0x0)) {
        FUN_100427a34(param_1,param_2,param_3,param_4,puVar2,param_4,&local_25c);
        FUN_1001e7247(puVar2,local_25c,local_268,uVar5,local_270);
        *param_7 = local_270[0];
        if (puVar2 != local_258) {
          FUN_1001c64c1(puVar2);
        }
      }
      else {
        uVar3 = FUN_1001cc310(param_1);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "uText != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else if (param_2 == '\0') {
      uVar6 = uVar5;
      if (uVar4 < (uint)param_6) {
        uVar6 = param_4;
      }
      if ((int)uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        if (uVar5 < param_4) {
          uVar4 = (uint)param_6;
        }
        uVar5 = 0;
        do {
          if (*(char *)(param_3 + uVar5) == '\0') {
            uVar6 = uVar5 & 0xffffffff;
            break;
          }
          *(char *)(param_5 + uVar5) = *(char *)(param_3 + uVar5);
          uVar5 = uVar5 + 1;
        } while (uVar4 != (uint)uVar5);
      }
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        FUN_1001e7d94(param_5,uVar6);
      }
      *param_7 = (int)uVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

