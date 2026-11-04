// name: FUN_10039c5a6
// address: 10039c5a6

undefined8 FUN_10039c5a6(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_58 [8];
  undefined1 *local_50;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_3;
  FUN_10039edac(local_58,param_1 + 0x48);
  uVar4 = 0;
  if (local_50 != local_58) {
    puVar3 = local_50;
    do {
      local_38 = *(undefined8 *)(puVar3 + 0x10);
      plVar1 = *(long **)(param_2 + 0x20);
      if (plVar1 == (long *)0x0) {
LAB_10039c645:
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
      if (cVar2 != '\0') {
        local_38 = *(undefined8 *)(puVar3 + 0x10);
        plVar1 = *(long **)(local_40 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_10039c645;
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
        uVar4 = 1;
      }
      puVar3 = *(undefined1 **)(puVar3 + 8);
    } while (puVar3 != local_58);
  }
  FUN_10039e992(local_58);
  return uVar4;
}

