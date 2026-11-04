// name: caseD_0
// address: 1000b4d49

void switchD_1000c8ebd::caseD_0(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  undefined8 in_RAX;
  undefined8 *puVar1;
  long in_R10;
  
  do {
    puVar1 = param_1;
    *puVar1 = in_RAX;
    puVar1[1] = in_RAX;
    puVar1[2] = in_RAX;
    puVar1[3] = in_RAX;
    puVar1[4] = in_RAX;
    puVar1[5] = in_RAX;
    puVar1[6] = in_RAX;
    puVar1[7] = in_RAX;
    param_1 = puVar1 + 8;
    in_R10 = in_R10 + -1;
  } while (in_R10 != 0);
  switch(param_3 & 7) {
  case 0:
    return;
  case 7:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)puVar1 + 0x41);
  case 6:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 1);
  case 5:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 1);
  case 4:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 1);
  case 3:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 1);
  case 2:
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 1);
  case 1:
    *(undefined1 *)param_1 = param_2;
    return;
  }
}

