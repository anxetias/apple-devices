// rea decompile_all
// name: _externalBackendCreate
// address: 0x2721c8
// body: available
// range: 0x2721c8-0x27278e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _externalBackendCreate(undefined8 *param_1,undefined8 param_2,ulong param_3,byte param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong local_38;
  
  puVar9 = (ulong *)_uarpZalloc(0x50);
  iVar6 = 0xb;
  if (puVar9 != (ulong *)0x0) {
    local_38 = 0;
    iVar6 = _parse_serial_string_u64(param_2,"SDOM");
    if (iVar6 == 0) {
      if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
        _printf("SDOM=0x%llX [8b]\n",local_38);
      }
      else {
        _uarpLogInfo(3,"SDOM=0x%llX [8b]\n",local_38);
      }
      if (local_38 < 0x100) {
        *(char *)((long)puVar9 + 0x2a) = (char)local_38;
        iVar6 = _parse_serial_string_u64(param_2,"CPID",&local_38);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
          _printf("CPID=0x%llX [16b]\n",local_38);
        }
        else {
          _uarpLogInfo(3,"CPID=0x%llX [16b]\n",local_38);
        }
        if (local_38 < 0x10000) {
          *(short *)(puVar9 + 1) = (short)local_38;
          iVar6 = _parse_serial_string_u64(param_2,"BDID",&local_38);
          if (iVar6 != 0) {
            return iVar6;
          }
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            _printf("BDID=0x%llX\n",local_38);
          }
          else {
            _uarpLogInfo(3,"BDID=0x%llX\n",local_38);
          }
          *puVar9 = local_38;
          iVar6 = _parse_serial_string_u64(param_2,"ECID");
          if (iVar6 != 0) {
            return iVar6;
          }
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            _printf("ECID=0x%llX\n",local_38);
          }
          else {
            _uarpLogInfo(3,"ECID=0x%llX\n",local_38);
          }
          puVar9[2] = local_38;
          iVar6 = _parse_serial_string_u64(param_2,"CPFM");
          if (iVar6 != 0) {
            return iVar6;
          }
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            _printf("CPFM=0x%llX [8b]\n",local_38);
          }
          else {
            _uarpLogInfo(3,"CPFM=0x%llX [8b]\n",local_38);
          }
          if (local_38 < 0x100) {
            *(byte *)((long)puVar9 + 0x29) = (byte)local_38 & 1;
            *(byte *)(puVar9 + 5) = (byte)(local_38 >> 1) & 1;
            iVar6 = _parse_serial_string_u64(param_2,"PREV",&local_38);
            if (iVar6 != 0) {
              return iVar6;
            }
            if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
              _printf("PREV=0x%llX [8b]\n",local_38);
            }
            else {
              _uarpLogInfo(3,"PREV=0x%llX [8b]\n",local_38);
            }
            if (local_38 < 0x100) {
              *(char *)((long)puVar9 + 0x2b) = (char)local_38;
              uVar10 = _uarpZalloc(0x10);
              puVar9[3] = uVar10;
              if (uVar10 == 0) {
                return 0xb;
              }
              puVar9[4] = 0x10;
              iVar6 = _parse_serial_string_buffer(param_2,"NONC",uVar10,0x10);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar6 = _parse_serial_string_u64(param_2,"CPRV",&local_38);
              if (iVar6 != 0) {
                return iVar6;
              }
              if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                _printf("CRPV=0x%llX [16b]\n",local_38);
              }
              else {
                _uarpLogInfo(3,"CRPV=0x%llX [16b]\n",local_38);
              }
              if (local_38 < 0x10000) {
                if (local_38 == 0xa0) {
                  uVar5 = _uarpNtohs((short)puVar9[1]);
                  *(undefined2 *)(puVar9 + 1) = uVar5;
                  uVar10 = _uarpNtohll(puVar9[2]);
                  puVar9[2] = uVar10;
                  if (*puVar9 >> 0x20 != 0) {
                    return 0x27;
                  }
                  uVar7 = _uarpNtohl();
                  *puVar9 = (ulong)uVar7;
                }
                else {
                  puVar3 = (undefined1 *)puVar9[3];
                  puVar12 = puVar3 + (puVar9[4] - 1);
                  if (puVar3 < puVar12) {
                    do {
                      puVar11 = puVar3 + 1;
                      uVar1 = *puVar3;
                      *puVar3 = *puVar12;
                      *puVar12 = uVar1;
                      puVar12 = puVar12 + -1;
                      puVar3 = puVar11;
                    } while (puVar11 < puVar12);
                  }
                }
                bVar2 = *(byte *)((long)puVar9 + 0x29);
                bVar4 = bVar2;
                if ((local_38 & 0xfffffffffffffeff) == 0xa0) {
                  bVar4 = (byte)puVar9[5];
                  *(byte *)((long)puVar9 + 0x29) = bVar4;
                  *(byte *)(puVar9 + 5) = bVar2;
                }
                *(byte *)((long)puVar9 + 0x3c) = (bVar4 | param_4) & 1;
                uVar8 = _apBoardForAceBoard(*puVar9);
                *(undefined4 *)((long)puVar9 + 0x34) = uVar8;
                uVar8 = _apChipForAceBoard(*puVar9);
                *(undefined4 *)(puVar9 + 7) = uVar8;
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _puts("Final params, after accounting for any endianness quirks:");
                }
                else {
                  _uarpLogInfo(3,"Final params, after accounting for any endianness quirks:\n");
                }
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _printf("boardID=0x%llX\n",*puVar9);
                }
                else {
                  _uarpLogInfo(3,"boardID=0x%llX\n",*puVar9);
                }
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _printf("ECID=0x%llX\n",puVar9[2]);
                }
                else {
                  _uarpLogInfo(3,"ECID=0x%llX\n",puVar9[2]);
                }
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _printf("chipID=0x%X\n",(ulong)(ushort)puVar9[1]);
                }
                else {
                  _uarpLogInfo(3,"chipID=0x%X\n",(short)puVar9[1]);
                }
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _printf("pStatus=%d, secMode=%d, SDOM=0x%X, PREV=0x%X\n",(ulong)(byte)puVar9[5],
                          (ulong)*(byte *)((long)puVar9 + 0x29),
                          (ulong)*(byte *)((long)puVar9 + 0x2a),
                          (ulong)*(byte *)((long)puVar9 + 0x2b));
                }
                else {
                  _uarpLogInfo(3,"pStatus=%d, secMode=%d, SDOM=0x%X, PREV=0x%X\n",(char)puVar9[5],
                               *(undefined1 *)((long)puVar9 + 0x29),
                               *(undefined1 *)((long)puVar9 + 0x2a),
                               *(undefined1 *)((long)puVar9 + 0x2b));
                }
                if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                  _printf("apBORD=0x%X, apChip=0x%X\n",(ulong)*(uint *)((long)puVar9 + 0x34),
                          (ulong)(uint)puVar9[7]);
                }
                else {
                  _uarpLogInfo(3,"apBORD=0x%X, apChip=0x%X\n",*(undefined4 *)((long)puVar9 + 0x34),
                               (int)puVar9[7]);
                }
                *(undefined4 *)(puVar9 + 6) = 1;
                puVar9[8] = param_3;
                *param_1 = puVar9;
                return 0;
              }
            }
          }
        }
      }
      iVar6 = 0x27;
    }
  }
  return iVar6;
}

