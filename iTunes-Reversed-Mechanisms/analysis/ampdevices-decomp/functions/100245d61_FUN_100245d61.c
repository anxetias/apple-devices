// name: FUN_100245d61
// address: 100245d61

void FUN_100245d61(long param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)(param_1 + 4);
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = *(undefined2 *)(param_1 + 6);
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    *(undefined1 *)(param_1 + 0x35) = 6;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (*(short *)(param_1 + 4) != 1) goto LAB_100245e9a;
  uVar2 = *(ushort *)(param_1 + 6);
  if (uVar2 < 4) {
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 0x9e) = 1;
    bVar6 = true;
    if (*(char *)(param_1 + 0x5b) == '\x02') {
      uVar4 = 0;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x5b) == '\x03') {
        uVar4 = 3;
      }
      else {
        uVar4 = 0;
      }
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x5b) = uVar4;
    *(undefined1 *)(param_1 + 0x9b) = uVar5;
    cVar1 = *(char *)(param_1 + 0x79);
    if (cVar1 == '\0') {
      bVar6 = *(char *)(param_1 + 0xb) == '\x02';
    }
    *(bool *)(param_1 + 0x9d) = bVar6;
    *(char *)(param_1 + 0x98) = cVar1;
    *(char *)(param_1 + 0xa8) = cVar1;
    bVar6 = *(char *)(param_1 + 0x7a) == '\x02';
    uVar4 = 1;
    if (bVar6) {
      uVar4 = 0x10;
    }
    *(undefined1 *)(param_1 + 0x99) = uVar4;
    *(char *)(param_1 + 0xa9) = bVar6 * '\x03' + '\x01';
    *(undefined1 *)(param_1 + 0x9a) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0x100;
LAB_100245e74:
    *(undefined1 *)(param_1 + 0x10f) = 1;
LAB_100245e7b:
    bVar3 = *(byte *)(param_1 + 0x117) & 0xfc;
    if (*(char *)(param_1 + 0x36) == '\x01') {
      *(undefined1 *)(param_1 + 0xf4) = 0xff;
    }
LAB_100245e90:
    bVar3 = bVar3 & 0xfb;
  }
  else {
    if (uVar2 == 4) {
      *(undefined1 *)(param_1 + 0x9e) = 1;
      goto LAB_100245e74;
    }
    if (uVar2 < 0xc) goto LAB_100245e74;
    if (uVar2 == 0xc) goto LAB_100245e7b;
    if (uVar2 < 0xf) {
      bVar3 = *(byte *)(param_1 + 0x117);
      goto LAB_100245e90;
    }
    if (0x18 < uVar2) goto LAB_100245e9a;
    bVar3 = *(byte *)(param_1 + 0x117);
  }
  *(byte *)(param_1 + 0x117) = bVar3 & 0xf7;
LAB_100245e9a:
  if (*(char *)(param_1 + 0x99) == '\0') {
    *(undefined2 *)(param_1 + 0x99) = 1;
  }
  if (*(char *)(param_1 + 0xa9) == '\0') {
    *(undefined2 *)(param_1 + 0xa9) = 1;
    *(undefined1 *)(param_1 + 0xab) = 1;
  }
  if (*(char *)(param_1 + 0x11d) == '\0') {
    *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 0x11d) = 1;
  }
  if (*(char *)(param_1 + 0x11f) == '\0') {
    *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 0x11f) = 1;
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    *(undefined1 *)(param_1 + 0x124) = 1;
  }
  if (*(short *)(param_1 + 0x126) == 0) {
    *(undefined2 *)(param_1 + 0x126) = 0x80;
  }
  *(undefined4 *)(param_1 + 4) = 0x190001;
  return;
}

