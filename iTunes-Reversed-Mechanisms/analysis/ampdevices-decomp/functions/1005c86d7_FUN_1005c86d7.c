// name: FUN_1005c86d7
// address: 1005c86d7

bool FUN_1005c86d7(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_148;
  int local_13c;
  undefined1 local_138 [32];
  char local_118 [256];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_148 = 0;
  local_13c = 0;
  if (DAT_1008c7908 == '\0') {
    DAT_1008c7908 = '\x02';
    uVar3 = FUN_1001ebbed();
    _sprintf(local_118,"com.apple.TV:%llu:VideosState",uVar3);
    iVar2 = FUN_1001c4a66(local_118,0,&local_148);
    if ((iVar2 == 0) && (FUN_1001c4a70(local_148,&local_13c), local_13c == 5)) {
      DAT_1008c7908 = '\x01';
    }
    else if ((DAT_1008c7908 == '\x02') &&
            (((iVar2 = FUN_1001c2203(local_138,0x20), iVar2 == 0 &&
              (cVar1 = FUN_1001df957(local_138,"cn",1), cVar1 != '\0')) &&
             (DAT_1008c7908 = '\x01', local_148 != 0)))) {
      FUN_1001c4a84(local_148,local_13c,5);
    }
    if (local_148 != 0) {
      FUN_1001c4a8e();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return DAT_1008c7908 == '\x01';
}

