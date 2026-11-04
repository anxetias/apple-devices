// name: FUN_100428138
// address: 100428138

void FUN_100428138(byte *param_1,char *param_2,uint param_3,long param_4,ulong param_5,
                  undefined4 *param_6)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 local_270 [3];
  undefined4 local_264;
  undefined4 *local_260;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_6 = 0;
  if (4 < (int)param_3 && param_2 != (char *)0x0) {
    uVar5 = param_5 & 0xffffffff;
    if ((byte)(*param_2 - 1U) < 3) {
      puVar2 = local_258;
      local_260 = param_6;
      if ((param_3 < 0x100) ||
         (puVar2 = (undefined1 *)FUN_1001c63e1(param_3 * 2), puVar2 != (undefined1 *)0x0)) {
        FUN_100428342(param_1,param_2,param_3,puVar2,param_3,&local_264);
        FUN_1001e7247(puVar2,local_264,param_4,uVar5,local_270);
        *local_260 = local_270[0];
        if (puVar2 != local_258) {
          FUN_1001c64c1(puVar2);
        }
      }
      else {
        uVar4 = FUN_1001cc310(param_1);
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "uText != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else if (*param_2 == '\0') {
      param_2 = param_2 + 4;
      uVar6 = (ulong)(param_3 - 5) + 1;
      do {
        uVar3 = uVar6 - 1;
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 == '\0') break;
        uVar7 = (uint)uVar6;
        uVar6 = uVar3;
      } while (1 < uVar7);
      uVar6 = param_5;
      if ((uint)uVar3 < (uint)param_5) {
        uVar6 = uVar3;
      }
      if ((int)uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar3;
        if ((uint)param_5 < (uint)uVar3) {
          uVar6 = param_5;
        }
        uVar6 = uVar6 & 0xffffffff;
        if (uVar3 < uVar5) {
          uVar5 = uVar3;
        }
        uVar3 = 0;
        do {
          if (param_2[uVar3] == '\0') {
            uVar6 = uVar3 & 0xffffffff;
            break;
          }
          *(char *)(param_4 + uVar3) = param_2[uVar3];
          uVar3 = uVar3 + 1;
        } while ((int)uVar5 != (int)uVar3);
      }
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        FUN_1001e7d94(param_4,uVar6);
      }
      *param_6 = (int)uVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

