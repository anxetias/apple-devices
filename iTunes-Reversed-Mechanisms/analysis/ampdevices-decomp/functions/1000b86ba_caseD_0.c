// name: caseD_0
// address: 1000b86ba

void switchD_1000a7e06::caseD_0
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  uint in_EAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    puVar3 = param_1;
    puVar2 = param_2;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[6] = puVar3[6];
    param_1 = puVar3 + 8;
    puVar2[7] = puVar3[7];
    param_2 = puVar2 + 8;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  switch(in_EAX & 7) {
  case 0:
    return;
  case 7:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)puVar3 + 0x41);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)puVar2 + 0x41);
  case 6:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)param_2 + 1);
  case 5:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)param_2 + 1);
  case 4:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)param_2 + 1);
  case 3:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)param_2 + 1);
  case 2:
    uVar1 = *(undefined1 *)param_1;
    param_1 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_2 = uVar1;
    param_2 = (undefined8 *)((long)param_2 + 1);
  case 1:
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    return;
  }
}

