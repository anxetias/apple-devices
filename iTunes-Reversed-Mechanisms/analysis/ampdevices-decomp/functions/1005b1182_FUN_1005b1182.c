// name: FUN_1005b1182
// address: 1005b1182

void FUN_1005b1182(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3[1] != *param_3) {
    FUN_10032f0f2(local_60);
    puVar4 = (undefined8 *)*param_3;
    puVar1 = (undefined8 *)param_3[1];
    if (puVar4 != puVar1) {
      do {
        uVar3 = FUN_1003c5880();
        cVar2 = _os_log_type_enabled(uVar3,1);
        if (cVar2 != '\0') {
          local_44 = *puVar4;
          local_48 = 0x8000100;
          __os_log_impl(0x100000000,uVar3,1,"ch>      adding %llx to delete list",&local_48,0xc);
        }
        FUN_100134a82(local_50,puVar4,0);
        FUN_1001a8c1c(&local_48,local_50);
        FUN_1001a814c(local_60,&local_48);
        FUN_1001aae6c(&local_48);
        FUN_1001aae6c(local_50);
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar1);
    }
    FUN_1001a7b90(&local_48,param_2);
    FUN_1001a7b90(local_50,local_60);
    FUN_1001a9c16(param_1 + 0x18,&local_48,local_50);
    FUN_1001ab240(local_50);
    FUN_1001ab240(&local_48);
    FUN_1001a7a94(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

