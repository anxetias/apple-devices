// name: FUN_1002556b0
// address: 1002556b0

ulong FUN_1002556b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = 0;
  local_50 = 0;
  cVar1 = FUN_1001cd899("storefront");
  if (cVar1 != '\0') {
    uVar6 = 0;
    lVar3 = FUN_1005f4d4c(&cf_MobileDeviceInvalidStorefrontIDsByProductVersion,0);
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_10025576c;
    }
    iVar2 = FUN_10024a696(param_1,&local_50);
    if (iVar2 == 0) {
      lVar5 = FUN_100166844(lVar3,local_50);
      if (lVar5 != 0) {
        uVar4 = FUN_10017076e(lVar5);
        cVar1 = FUN_100170781(lVar5,0,uVar4,0);
        uVar6 = CONCAT71((int7)((ulong)lVar5 >> 8),cVar1 != '\0');
        goto LAB_10025576c;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  uVar6 = 0;
LAB_10025576c:
  FUN_10017060f(0);
  FUN_10017060f(local_50);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

