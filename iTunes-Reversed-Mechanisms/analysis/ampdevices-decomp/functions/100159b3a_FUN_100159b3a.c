// name: FUN_100159b3a
// address: 100159b3a

void FUN_100159b3a(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar1 = (long *)param_1[5];
  if (plVar1 != (long *)0x0) {
    plVar4 = param_1 + 5;
    do {
      if ((ulong)plVar1[4] >= param_2) {
        plVar4 = plVar1;
      }
      plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
    } while (plVar1 != (long *)0x0);
    if ((plVar4 != param_1 + 5) && (uVar3 = plVar4[4], uVar3 <= param_2)) {
      plVar1 = (long *)PTR__kCFBooleanFalse_10082e030;
      if ((char)plVar4[5] != '\0') {
        plVar1 = (long *)PTR__kCFBooleanTrue_10082e038;
      }
      lVar5 = *plVar1;
      goto LAB_100159cda;
    }
  }
  plVar1 = (long *)param_1[0xb];
  if (plVar1 == (long *)0x0) {
LAB_100159bb5:
    plVar1 = (long *)param_1[0x11];
    if (plVar1 != (long *)0x0) {
      plVar4 = param_1 + 0x11;
      do {
        if ((ulong)plVar1[4] >= param_2) {
          plVar4 = plVar1;
        }
        plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
      } while (plVar1 != (long *)0x0);
      if ((plVar4 != param_1 + 0x11) && ((ulong)plVar4[4] <= param_2)) goto LAB_100159c69;
    }
    plVar1 = (long *)param_1[0x17];
    if (plVar1 != (long *)0x0) {
      plVar4 = param_1 + 0x17;
      do {
        if ((ulong)plVar1[4] >= param_2) {
          plVar4 = plVar1;
        }
        plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
      } while (plVar1 != (long *)0x0);
      if ((plVar4 != param_1 + 0x17) && ((ulong)plVar4[4] <= param_2)) {
        uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
        uVar6 = 4;
        goto LAB_100159ca0;
      }
    }
    plVar1 = (long *)param_1[0x1d];
    if (plVar1 != (long *)0x0) {
      plVar4 = param_1 + 0x1d;
      do {
        if ((ulong)plVar1[4] >= param_2) {
          plVar4 = plVar1;
        }
        plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
      } while (plVar1 != (long *)0x0);
      if ((plVar4 != param_1 + 0x1d) && (uVar3 = plVar4[4], uVar3 <= param_2)) {
        lVar5 = plVar4[5];
LAB_100159cda:
                    /* WARNING: Could not recover jumptable at 0x000100159cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x50))(param_1,uVar3,lVar5,*(code **)(*param_1 + 0x50));
        return;
      }
    }
    return;
  }
  plVar4 = param_1 + 0xb;
  do {
    if ((ulong)plVar1[4] >= param_2) {
      plVar4 = plVar1;
    }
    plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
  } while (plVar1 != (long *)0x0);
  if ((plVar4 == param_1 + 0xb) || (param_2 < (ulong)plVar4[4])) goto LAB_100159bb5;
LAB_100159c69:
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
  uVar6 = 3;
LAB_100159ca0:
  uVar2 = FUN_100171f60(uVar2,uVar6,plVar4 + 5);
  (**(code **)(*param_1 + 0x50))(param_1,plVar4[4],uVar2);
  FUN_10017060f(uVar2);
  return;
}

