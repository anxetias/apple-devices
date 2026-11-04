// name: FUN_1002a92ad
// address: 1002a92ad

void FUN_1002a92ad(long param_1,long param_2,undefined1 *param_3,short *param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_50;
  short *local_48;
  long local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  local_40 = param_1;
  if (param_4 != (short *)0x0) {
    FUN_1001c62d9(param_4,8);
    param_4[1] = -1;
  }
  lVar4 = local_40;
  local_48 = param_4;
  FUN_10042ad4c(local_40,0x41504943,0,0);
  FUN_10042ad4c(lVar4,0x50494320,0,0);
  if (param_2 != 0) {
    iVar2 = FUN_1005d3a5b(param_2);
    if (iVar2 != 0) {
      iVar7 = 0;
      do {
        lVar4 = FUN_1005d3da4(param_2,iVar7);
        if (lVar4 != 0) {
          lVar5 = FUN_1005d3229(lVar4,0x40000000);
          FUN_1005d3389(lVar4,0x61777470,local_34);
          FUN_1005d3389(lVar4,0x6177666d,local_38);
          FUN_1005d3389(lVar4,0x61776465,&local_50);
          psVar1 = local_48;
          if (lVar5 != 0) {
            uVar6 = 0x50494320;
            if (2 < *(byte *)(local_40 + 0xb)) {
              uVar6 = 0x41504943;
            }
            FUN_10042b75c(local_40,uVar6,local_34[0],local_38[0],local_50,iVar7 + 1,lVar5);
            if (psVar1 != (short *)0x0) {
              *psVar1 = *psVar1 + 1;
              iVar3 = FUN_100170ef7(lVar5);
              *(int *)(psVar1 + 2) = *(int *)(psVar1 + 2) + iVar3;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar2 != iVar7);
    }
  }
  return;
}

