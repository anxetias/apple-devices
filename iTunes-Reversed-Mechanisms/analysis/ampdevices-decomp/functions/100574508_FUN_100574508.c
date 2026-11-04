// name: FUN_100574508
// address: 100574508

undefined4
FUN_100574508(long *param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined1 local_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_34;
  
  local_c8 = (undefined4)param_1[4];
  uStack_c4 = *(undefined4 *)((long)param_1 + 0x24);
  uStack_c0 = (undefined4)param_1[5];
  uStack_bc = *(undefined4 *)((long)param_1 + 0x2c);
  local_b8 = (undefined4)param_1[6];
  uStack_b4 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_b0 = (undefined4)param_1[7];
  uStack_ac = *(undefined4 *)((long)param_1 + 0x3c);
  local_a8 = param_1[8];
  local_70 = param_6;
  local_34 = param_3;
  cVar4 = (**(code **)(*param_1 + 0xc0))(param_1,&local_c8,0,local_98,&local_40);
  if (cVar4 != '\0') {
    local_68 = param_5;
    local_60 = param_4;
    do {
      iVar5 = (**(code **)(*param_1 + 0xd8))(param_1,local_98);
      if (iVar5 == param_2) {
        local_58 = *local_70;
        uStack_54 = local_70[1];
        uStack_50 = local_70[2];
        uStack_4c = local_70[3];
        if (*(long *)(local_70 + 2) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(local_70 + 2) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        uVar6 = (**(code **)(*param_1 + 0xf8))
                          (param_1,local_98,(undefined1)local_34,local_60,local_68,&local_58);
        plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar3 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
            return uVar6;
          }
          return uVar6;
        }
        return uVar6;
      }
      cVar4 = (**(code **)(*param_1 + 0xc0))(param_1,&local_c8,local_40,local_98,&local_40);
    } while (cVar4 != '\0');
  }
  return 0;
}

