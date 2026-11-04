// name: FUN_100008030
// address: 100008030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100008030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 local_38 [8];
  
  puVar2 = PTR__free_10082eaf0;
  uVar3 = (DAT_10088e7f8 - _DAT_10088e7e8) - (long)local_38;
  _DAT_10088e7e8 = (uVar3 + 0x585ffb1538078cd1) * 0x79f54c43;
  DAT_10088e7f8 = (uVar3 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar4 = ((uint)_DAT_10088e7e8 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  puVar1 = (&PTR__bootstrap_look_up_10082e9f0)
           [(int)((byte)((byte)uVar4 ^ (&DAT_1006d1a30)[(byte)(&DAT_1006d0b70)[uVar4 & 0xff] ^ 6]) -
                 0xb6)];
  switch(*(long *)(puVar1 + -3) == 0) {
  case false:
    (*(code *)PTR__free_10082eaf0)();
    *(undefined8 *)(puVar1 + -3) = 0;
    switch(*(long *)(puVar1 + 0xd) == 0) {
    case false:
      goto switchD_100005f4d_caseD_0;
    }
switchD_100005f4d_caseD_1:
    *(undefined4 *)(puVar1 + 0x19) = 0x50a01b4b;
    *(undefined8 *)(puVar1 + -0xb) = 0x611c7e149b50062b;
    switch(*(long *)(puVar1 + 0x25) == 0) {
    case true:
      goto switchD_1000040b8_caseD_1;
    }
switchD_1000040b8_caseD_0:
    (*(code *)puVar2)();
    *(undefined8 *)(puVar1 + 0x25) = 0;
    switch(*(long *)(puVar1 + 0x35) == 0) {
    case true:
switchD_1000067cf_caseD_1:
      *(undefined4 *)(puVar1 + 0x41) = 0x50a01b4b;
      *(undefined8 *)(puVar1 + 0x1d) = 0x611c7e149b50062b;
      return 0;
    }
    break;
  case true:
    switch(*(long *)(puVar1 + 0xd) == 0) {
    case true:
      goto switchD_100005f4d_caseD_1;
    }
switchD_100005f4d_caseD_0:
    (*(code *)puVar2)();
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0x50a01b4b;
    *(undefined8 *)(puVar1 + -0xb) = 0x611c7e149b50062b;
    switch(*(long *)(puVar1 + 0x25) == 0) {
    case false:
      goto switchD_1000040b8_caseD_0;
    case true:
switchD_1000040b8_caseD_1:
      switch(*(long *)(puVar1 + 0x35) == 0) {
      case true:
        goto switchD_1000067cf_caseD_1;
      }
    }
  }
  (*(code *)puVar2)();
  *(undefined8 *)(puVar1 + 0x35) = 0;
  goto switchD_1000067cf_caseD_1;
}

