// name: FUN_1002f78b7
// address: 1002f78b7

cfstringStruct * FUN_1002f78b7(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined1 local_868 [1056];
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1003870d4(param_1,2,local_448);
  pcVar6 = (cfstringStruct *)0x0;
  if (iVar1 == 0) {
    pcVar6 = (cfstringStruct *)0x0;
    iVar1 = FUN_1001888ba(local_448,"versions.plist",local_868,0);
    if (iVar1 == 0) {
      pcVar6 = (cfstringStruct *)0x0;
      lVar3 = FUN_10016aa24(DAT_1008c4d90,local_868,0,0);
      if (lVar3 != 0) {
        lVar4 = FUN_100166b7f(lVar3,&cf_Versions);
        pcVar6 = (cfstringStruct *)0x0;
        if (lVar4 != 0) {
          pcVar5 = &cf_ArtistsExceptions;
          if ((int)param_1 != 0x3c) {
            pcVar5 = pcVar6;
          }
          pcVar7 = &cf_ConditionerRules;
          if ((int)param_1 != 0x3d) {
            pcVar7 = pcVar5;
          }
          lVar4 = FUN_100166b7f(lVar4,pcVar7);
          if (lVar4 != 0) {
            uVar2 = FUN_100167d66(lVar4,&cf_changelist);
            pcVar6 = (cfstringStruct *)(ulong)uVar2;
          }
        }
        FUN_10017060f(lVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return pcVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

