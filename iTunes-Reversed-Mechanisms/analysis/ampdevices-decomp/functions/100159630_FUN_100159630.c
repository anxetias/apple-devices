// name: FUN_100159630
// address: 100159630

void FUN_100159630(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  long local_38;
  
  plVar5 = (long *)param_1[4];
  if (plVar5 != param_1 + 5) {
    uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
    uVar4 = *(undefined8 *)PTR__kCFBooleanFalse_10082e030;
    do {
      cVar3 = (**(code **)(*param_1 + 0x10))(param_1,plVar5[4],&local_38,1);
      uVar7 = uVar4;
      if ((*(byte *)(plVar5 + 5) & 1) != 0) {
        uVar7 = uVar1;
      }
      uVar6 = uVar7;
      if (*(byte *)(plVar5 + 5) == (byte)local_38) {
        uVar6 = 0;
      }
      if (cVar3 == '\0') {
        uVar6 = uVar7;
      }
      (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],uVar6);
      plVar2 = (long *)plVar5[1];
      plVar8 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar8[2];
          bVar9 = (long *)*plVar5 != plVar8;
          plVar8 = plVar5;
        } while (bVar9);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != param_1 + 5);
  }
  plVar5 = (long *)param_1[10];
  if (plVar5 != param_1 + 0xb) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    do {
      cVar3 = (**(code **)(*param_1 + 0x18))(param_1,plVar5[4],&local_38,1);
      if ((cVar3 == '\0') || ((int)plVar5[5] != (int)local_38)) {
        uVar4 = FUN_100171f60(uVar1,3,plVar5 + 5);
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],uVar4);
        FUN_10017060f(uVar4);
      }
      else {
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],0);
      }
      plVar2 = (long *)plVar5[1];
      plVar8 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar8[2];
          bVar9 = (long *)*plVar5 != plVar8;
          plVar8 = plVar5;
        } while (bVar9);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != param_1 + 0xb);
  }
  plVar5 = (long *)param_1[0x10];
  if (plVar5 != param_1 + 0x11) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    do {
      cVar3 = (**(code **)(*param_1 + 0x20))(param_1,plVar5[4],&local_38,1);
      if ((cVar3 == '\0') || ((int)plVar5[5] != (int)local_38)) {
        uVar4 = FUN_100171f60(uVar1,3,plVar5 + 5);
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],uVar4);
        FUN_10017060f(uVar4);
      }
      else {
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],0);
      }
      plVar2 = (long *)plVar5[1];
      plVar8 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar8[2];
          bVar9 = (long *)*plVar5 != plVar8;
          plVar8 = plVar5;
        } while (bVar9);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != param_1 + 0x11);
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != param_1 + 0x17) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    do {
      cVar3 = (**(code **)(*param_1 + 0x28))(param_1,plVar5[4],&local_38,1);
      if ((cVar3 == '\0') || (plVar5[5] != local_38)) {
        uVar4 = FUN_100171f60(uVar1,4,plVar5 + 5);
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],uVar4);
        FUN_10017060f(uVar4);
      }
      else {
        (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],0);
      }
      plVar2 = (long *)plVar5[1];
      plVar8 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar8[2];
          bVar9 = (long *)*plVar5 != plVar8;
          plVar8 = plVar5;
        } while (bVar9);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != param_1 + 0x17);
  }
  plVar5 = (long *)param_1[0x1c];
  do {
    if (plVar5 == param_1 + 0x1d) {
      FUN_1001599e2();
      *(undefined1 *)(param_1 + 0x1f) = 0;
      return;
    }
    local_38 = FUN_1001593ea(param_1,plVar5[4]);
    if (local_38 == 0) {
LAB_10015994b:
      (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],plVar5[5]);
    }
    else {
      cVar3 = FUN_100170633(plVar5[5],local_38);
      if (cVar3 == '\0') {
        FUN_10017060f(local_38);
        goto LAB_10015994b;
      }
      (**(code **)(*param_1 + 0x50))(param_1,plVar5[4],0);
      FUN_10017060f(local_38);
    }
    plVar2 = (long *)plVar5[1];
    plVar8 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar8[2];
        bVar9 = (long *)*plVar5 != plVar8;
        plVar8 = plVar5;
      } while (bVar9);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  } while( true );
}

