// name: FUN_100245b2b
// address: 100245b2b

void FUN_100245b2b(undefined4 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 local_710;
  undefined1 local_708 [4];
  short local_704;
  ushort local_702;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002455a1(param_3);
  iVar2 = FUN_100245669(param_1,param_2,0x6974756e,"iTunesPrefs",param_3,0x4d0,0);
  if (((iVar2 != 0) || (*param_3 != 0x64707266)) || (1 < *(ushort *)(param_3 + 1))) {
    FUN_1002455a1(param_3);
  }
  iVar2 = FUN_100245776(param_1,param_2,0x6974756e,"iTunesPrefs.plist",0,&local_710);
  if (iVar2 != 0) {
    iVar2 = FUN_100245776(param_1,param_2,0x6974756e,"iTunesPrefs.plist.tmp",0,&local_710);
    if (iVar2 != 0) goto LAB_100245c7d;
  }
  cVar1 = FUN_100245cb2(local_710,local_708,0,0,0);
  if (cVar1 != '\0') {
    if (((short)param_3[1] == local_704) && (*(ushort *)((long)param_3 + 6) < local_702)) {
      FUN_1001e04f5("iTunesPrefs.plist",local_238);
      FUN_100245ace(param_1,param_2,0x6974756e,local_238);
    }
    else {
      _memcpy(param_3,local_708,0x4d0);
    }
  }
  FUN_10017060f(local_710);
LAB_100245c7d:
  FUN_100245d61(param_3,param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

