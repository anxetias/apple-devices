// name: FUN_1002c55dc
// address: 1002c55dc

int FUN_1002c55dc(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (char *)0x0;
  if (param_2 == 9) {
    iVar3 = FUN_1001d3f2d(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),"db_info",0,
                          *(undefined8 *)(param_1 + 0x28),"genius_cuid",param_4,param_3);
    if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1002c5795;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
  }
  else {
    iVar3 = 0;
    if (param_2 != 0x6462686d) goto LAB_1002c5795;
    lVar4 = *(long *)(param_3 + 0x48);
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) {
      lVar4 = FUN_1001ea62b(0);
      *(long *)(param_1 + 0x28) = lVar4;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(lVar1 + 0x50) = lVar4;
    iVar3 = FUN_100627d5e(lVar1,*(undefined1 *)(param_3 + 0xc),*(undefined1 *)(param_3 + 0x10),0,0,1
                         );
    if (iVar3 == -0x80) goto LAB_1002c5795;
    if (iVar3 == 0) {
      local_50 = _sqlite3_mprintf("INSERT INTO db_info (pid,audio_language,subtitle_language) VALUES (%lld,%d,%d)"
                                  ,*(undefined8 *)(param_1 + 0x28),
                                  (ulong)(uint)(int)*(short *)(param_3 + 0xa0),
                                  (ulong)(uint)(int)*(short *)(param_3 + 0xa2));
      iVar3 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
      if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1002c5795;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
    }
  }
  if (cVar2 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar3;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1002c5795:
  _sqlite3_free(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

