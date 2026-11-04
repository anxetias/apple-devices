// name: FUN_1005e8fac
// address: 1005e8fac

undefined4 FUN_1005e8fac(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_68 [32];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  puVar1 = PTR___DefaultRuneLocale_10082cae8;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  while( true ) {
    cVar2 = *(char *)(param_1 + uVar7);
    if (cVar2 < '\0') {
      uVar3 = ___maskrune((int)cVar2,0x100);
    }
    else {
      uVar3 = *(uint *)(puVar1 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) & 0x100;
    }
    if ((uVar3 == 0) || (0x1e < uVar7)) break;
    local_68[uVar7] = *(undefined1 *)(param_1 + uVar7);
    uVar7 = uVar7 + 1;
  }
  local_68[uVar7] = 0;
  lVar5 = FUN_1001734f5(DAT_1008c4d90,local_68,0x600,*(undefined8 *)PTR__kCFAllocatorNull_10082e028)
  ;
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "productTypeCFString";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = FUN_1005bc20a(lVar5);
    FUN_10017060f(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

