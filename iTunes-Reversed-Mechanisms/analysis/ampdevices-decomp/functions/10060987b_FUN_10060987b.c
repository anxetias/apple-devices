// name: FUN_10060987b
// address: 10060987b

int FUN_10060987b(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_58 = local_58 & 0xffff0000;
    __os_log_impl(0x100000000,uVar5,1,"sync> backing up device",&local_58,2);
  }
  FUN_100602d40(param_1,0x626b7570,FUN_1006157b9);
  cVar3 = FUN_1005458b5(lVar1,*(uint *)(param_1 + 0x38) & 1);
  if (cVar3 == '\0') {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xfe;
    iVar4 = 0;
  }
  else {
    dVar6 = (double)FUN_1001ebd46();
    while (iVar4 = FUN_10060274a(param_1,FUN_100615a04,"BackupThread"), iVar4 == 0) {
      iVar4 = FUN_100602806(param_1);
      if (iVar4 != 0) {
        if (iVar4 == -0x80) goto LAB_100609ad9;
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        goto joined_r0x0001006099ce;
      }
      if ((*(int *)(*(long *)(param_1 + 0x28) + 0x44) != -0x23) ||
         ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
LAB_100609a79:
        cVar3 = FUN_1001fc024(lVar1);
        dVar7 = (double)FUN_1001ebd46();
        FUN_100367710(dVar7 - dVar6,lVar1 + 0x50,cVar3 != '\0',
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x44));
        iVar4 = 0;
        if (*(int *)(*(long *)(param_1 + 0x28) + 0x44) == 0) {
          *(undefined2 *)(lVar1 + 0x6af0) = 0;
          *(undefined1 *)(lVar1 + 0x6ae8) = 1;
          *(byte *)(lVar1 + 0x6b23) = *(byte *)(lVar1 + 0x6b23) & 0xfc;
          FUN_1004e1698(lVar1);
        }
        goto LAB_100609ad9;
      }
      FUN_1004ee22c(lVar1);
      cVar3 = FUN_1005463ad(lVar1);
      FUN_1004ed4f6(lVar1);
      if (cVar3 == '\0') {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x44) = 0xffffffeb;
        goto LAB_100609a79;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x44) = 0;
    }
    if (iVar4 != -0x80) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
joined_r0x0001006099ce:
      if (cVar3 != '\0') {
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        local_4a = iVar4;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100609ad9:
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x6750);
  if (lVar2 != 0) {
    FUN_100529664(lVar2,0,0);
  }
  *(undefined2 *)(lVar1 + 0x67bc) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

