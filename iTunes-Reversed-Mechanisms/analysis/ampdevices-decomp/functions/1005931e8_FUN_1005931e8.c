// name: FUN_1005931e8
// address: 1005931e8

undefined8 FUN_1005931e8(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      lVar3 = FUN_1004968c5(param_1);
      if (lVar3 != 0) {
        bVar6 = false;
        do {
          lVar4 = FUN_100496985(lVar3);
          if (899 < *(uint *)(lVar3 + 0x10)) {
            if (!bVar6) {
              iVar2 = FUN_10049980b(lVar3,&local_458,0);
              if (iVar2 == 0) {
                iVar2 = FUN_100182d4d(&local_458);
                if (iVar2 == 0) {
                  bVar6 = true;
                }
              }
            }
            FUN_100497f5f(lVar3);
          }
          lVar3 = lVar4;
        } while (lVar4 != 0);
      }
      uVar5 = 0;
      goto LAB_1005932bc;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    local_458 = 0x8220202;
    local_454 = "Assertion failure";
    local_44c = 0x822;
    local_44a = "ITImageInfoIsValid(imageInfo)";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1005932bc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

