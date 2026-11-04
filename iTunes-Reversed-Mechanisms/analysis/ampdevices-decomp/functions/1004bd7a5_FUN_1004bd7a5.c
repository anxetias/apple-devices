// name: FUN_1004bd7a5
// address: 1004bd7a5

undefined8 FUN_1004bd7a5(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((((cVar1 == '\0') || (uVar5 = 1, *(char *)(param_1 + 0x778) == '\0')) &&
      (uVar5 = 1, (*(byte *)(param_1 + 0x7de) & 0x40) != 0)) &&
     ((*(char *)(param_1 + 0x778) == '\0' && (*(int *)(param_1 + 0x1304) == 0x68747470)))) {
    lVar2 = FUN_100171475(param_2,&cf_url);
    if (lVar2 != 0) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFStringGetTypeID();
      if (lVar3 == lVar4) {
        local_48 = 0;
        uStack_44 = 0;
        lVar3 = *(long *)(param_1 + 0x1310);
        if (lVar3 == 0) {
          FUN_100198282(*(undefined8 *)(param_1 + 0x1308),0,&local_48);
          lVar3 = CONCAT44(uStack_44,local_48);
        }
        lVar2 = FUN_100173bb7(lVar2,lVar3,0);
        if (lVar2 == 0) goto LAB_1004bd89c;
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = "CFGetTypeID(dictionaryString) == CFStringGetTypeID()";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    uVar5 = 0;
  }
LAB_1004bd89c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

