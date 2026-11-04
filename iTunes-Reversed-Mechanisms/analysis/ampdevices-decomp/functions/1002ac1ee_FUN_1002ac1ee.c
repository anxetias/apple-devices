// name: FUN_1002ac1ee
// address: 1002ac1ee

void FUN_1002ac1ee(long param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004de07b();
  if (lVar4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(long *)(lVar4 + 0x14d10) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    uVar5 = FUN_1002abbfa(lVar4);
    uVar6 = FUN_1004e39cc(lVar4,1);
    if (uVar6 < uVar5) {
      uVar7 = FUN_100416f20(*(undefined4 *)(lVar4 + 0x66b0),0x10cc0077);
      FUN_1001b7eb0(local_88,uVar7);
      FUN_1001c334a(local_78,0x10cf002e);
      FUN_1001c334a(local_68,0x10cf002f);
      FUN_1004fda52(&local_58,*(undefined4 *)(lVar4 + 0x28));
      sVar3 = FUN_10044f9f1(local_88,local_78,local_68,&local_58,0);
      FUN_1001b7a50(&local_58);
      if (sVar3 == 1) {
        lVar8 = FUN_10048604a(param_1);
        if (lVar8 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "playlist != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          FUN_100313e0b(param_1);
          cVar1 = FUN_1002ac49b(lVar4,lVar8,uVar6,0);
          cVar2 = FUN_1002ac49b(lVar4,lVar8,uVar6,1);
          FUN_1002fbbfc(param_1);
          if (cVar1 != '\0' || cVar2 != '\0') {
            FUN_100321e5c(param_1);
          }
        }
      }
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_78);
      FUN_1001b7a50(local_88);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

