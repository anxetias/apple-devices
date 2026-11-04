// name: FUN_1001abd32
// address: 1001abd32

void FUN_1001abd32(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 local_a8 [16];
  undefined8 local_98 [2];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_70 [16];
  undefined8 local_60 [2];
  long local_50 [2];
  long *local_40;
  undefined1 *local_38;
  
  if (*param_1 != 0) {
    local_40 = param_1;
    FUN_1001b7a44(local_a8);
    lVar7 = *param_2;
    lVar1 = param_2[1];
    if (lVar7 != lVar1) {
      uVar5 = 0x3f;
      do {
        FUN_1001b7f2a(local_60,lVar7);
        FUN_1001b7f2a(local_70,lVar7 + 8);
        lVar3 = FUN_1001b83f0(local_60);
        lVar4 = FUN_1001b83f0(local_70);
        FUN_1001a8b4c(&local_88,(lVar4 + lVar3) * 3 + 2);
        local_38 = local_88 + 1;
        *local_88 = uVar5;
        local_50[0] = 0x43ffffff01ffb381;
        local_50[1] = 0x23ffffff;
        lVar3 = FUN_1001b83ae(local_60);
        lVar4 = FUN_1001b83f0(local_60);
        FUN_1001ac12c(lVar3,lVar4 + lVar3,local_50,&local_38);
        cVar2 = FUN_1001b8428(local_70);
        if (cVar2 == '\0') {
          *local_38 = 0x3d;
          local_38 = local_38 + 1;
          lVar3 = FUN_1001b83ae(local_70);
          lVar4 = FUN_1001b83f0(local_70);
          FUN_1001ac12c(lVar3,lVar4 + lVar3,local_50,&local_38);
        }
        FUN_1001b7b34(local_98,local_88,(long)local_38 - (long)local_88);
        FUN_1001bbcfe(local_a8,local_98);
        FUN_1001b7a50(local_98);
        if (local_88 != (undefined1 *)0x0) {
          local_80 = local_88;
          operator_delete(local_88);
        }
        FUN_1001b7a50(local_70);
        FUN_1001b7a50(local_60);
        lVar7 = lVar7 + 0x10;
        uVar5 = 0x26;
      } while (lVar7 != lVar1);
    }
    local_60[0] = _CFURLCopyQueryString(*local_40,0);
    FUN_1001b7eb0(&local_88,local_60[0]);
    FUN_10016d588(local_60);
    cVar2 = FUN_1001b8428(&local_88);
    if (cVar2 == '\0') {
      FUN_1001ab424(local_70,local_40);
      FUN_1001b7b04(local_98,"?");
      FUN_1001b7a5c(local_50,local_98);
      FUN_1001bbcfe(local_50,&local_88);
      FUN_1001ba564(local_60,local_70,local_50,local_a8);
      FUN_10013e3f2(&local_38,local_60);
      if ((undefined1 *)*local_40 != local_38) {
        if ((undefined1 *)*local_40 != (undefined1 *)0x0) {
          _CFRelease();
        }
        *local_40 = (long)local_38;
      }
      local_38 = (undefined1 *)0x0;
      FUN_1001ab3a8();
      FUN_1001b7a50(local_60);
      FUN_1001b7a50(local_50);
      puVar6 = local_98;
    }
    else {
      FUN_1001ab424(local_70,local_40);
      FUN_1001b7a5c(local_60,local_70);
      FUN_1001bbcfe(local_60,local_a8);
      FUN_10013e3f2(local_50,local_60);
      if (*local_40 != local_50[0]) {
        if (*local_40 != 0) {
          _CFRelease();
        }
        *local_40 = local_50[0];
      }
      local_50[0] = 0;
      FUN_1001ab3a8();
      puVar6 = local_60;
    }
    FUN_1001b7a50(puVar6);
    FUN_1001b7a50(local_70);
    FUN_1001b7a50(&local_88);
    FUN_1001b7a50(local_a8);
  }
  return;
}

