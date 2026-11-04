// name: FUN_10057b687
// address: 10057b687

void FUN_10057b687(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  cVar2 = FUN_1001e3631(param_1,"-movie",1);
  puVar3 = param_1;
  if (cVar2 != '\0') {
    puVar3 = local_138;
    FUN_1001dfbb3(param_1,puVar3,0x100);
    FUN_1001df1e7("s",puVar3,0x100);
  }
  lVar4 = 0;
  do {
    cVar2 = FUN_1001df957("al-movies" + lVar4,puVar3,1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)((long)&DAT_100757404 + lVar4);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)((long)&DAT_100757408 + lVar4);
      }
      if (iVar1 == 0) goto LAB_10057b77c;
      goto LAB_10057b781;
    }
    lVar4 = lVar4 + 0x1c;
  } while (lVar4 != 0x1c00);
  if (param_2 != (undefined4 *)0x0) {
    cVar2 = FUN_1001e3631(puVar3,"-tv",1);
    if (cVar2 == '\0') {
      cVar2 = FUN_1001e3631(puVar3,"_tv",1);
      if (cVar2 == '\0') goto LAB_10057b77c;
    }
    *param_2 = 2;
  }
LAB_10057b77c:
  FUN_10057af3e();
LAB_10057b781:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

