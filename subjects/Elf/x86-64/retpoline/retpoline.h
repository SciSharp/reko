// retpoline.h
// Generated by decompiling retpoline.elf
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4007A8 (str char) str4007A8) (600E10 (union "Eq_221" (word32 u0) ((ptr code) u1)) u600E10) (600FF8 word64 qw600FF8) (601040 byte b601040))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_16: (union "Eq_16" (word32 u0) ((ptr code) u1))
	T_16 (in eax : word32)
Eq_17: (union "Eq_17" (int64 u0) (size_t u1))
	T_17 (in qwArg00 : Eq_17)
	T_27 (in num : size_t)
	T_28 (in size : size_t)
	T_29 (in 0x0000000000400660 : word64)
	T_91 (in (int64) edi : int64)
	T_92 (in (int64) esi : int64)
Eq_18: (fn void (ptr64))
	T_18 (in __align : ptr64)
	T_19 (in signature of __align : void)
Eq_25: (fn (ptr void) (Eq_17, Eq_17))
	T_25 (in calloc : ptr64)
	T_26 (in signature of calloc : void)
	T_90 (in calloc : ptr64)
Eq_31: (fn void ())
	T_31 (in __hlt : ptr64)
	T_32 (in signature of __hlt : void)
Eq_51: (union "Eq_51" (word32 u0) ((ptr code) u1))
	T_51 (in eax : word32)
Eq_68: (union "Eq_68" (word32 u0) ((ptr code) u1))
	T_68 (in eax : word32)
Eq_76: (fn void (word64))
	T_76 (in deregister_tm_clones : ptr64)
	T_77 (in signature of deregister_tm_clones : void)
Eq_84: (fn void ())
	T_84 (in register_tm_clones : ptr64)
	T_85 (in signature of register_tm_clones : void)
Eq_158: (fn void ((ptr void)))
	T_158 (in free : ptr64)
	T_159 (in signature of free : void)
	T_180 (in free : ptr64)
Eq_161: (fn (ptr void) (word32, word32))
	T_161 (in my1 : ptr64)
	T_162 (in signature of my1 : void)
Eq_170: (fn void ())
	T_170 (in __llvm_retpoline_r11 : ptr64)
	T_171 (in signature of __llvm_retpoline_r11 : void)
	T_173 (in __llvm_retpoline_r11 : ptr64)
Eq_175: (fn int32 ((ptr char)))
	T_175 (in puts : ptr64)
	T_176 (in signature of puts : void)
Eq_185: (fn void (word64))
	T_185 (in fn0000000000400700 : ptr64)
	T_186 (in signature of fn0000000000400700 : void)
Eq_191: (fn void ())
	T_191 (in _init : ptr64)
	T_192 (in signature of _init : void)
Eq_194: (union "Eq_194" (int64 u0) (ptr64 u1))
	T_194 (in 0000000000600E18 : ptr64)
Eq_195: (union "Eq_195" (int64 u0) (ptr64 u1))
	T_195 (in 0000000000600E10 : ptr64)
Eq_221: (union "Eq_221" (word32 u0) ((ptr code) u1))
	T_221 (in Mem0[0x0000000000600E10 + 0x0000000000000000:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rax_4 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_3: (in 0000000000600FF8 : ptr64)
  Class: Eq_3
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_6 t0000)))
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_5: (in 0x0000000000600FF8 + 0x0000000000000000 : word64)
  Class: Eq_5
  DataType: ptr64
  OrigDataType: ptr64
T_6: (in Mem0[0x0000000000600FF8 + 0x0000000000000000:word64] : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_7: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_8: (in rax_4 == 0x0000000000000000 : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in rsp_17 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_10: (in SCZO_18 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in rax_19 : word64)
  Class: Eq_11
  DataType: word64
  OrigDataType: word64
T_12: (in SZO_20 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in C_21 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in Z_22 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in eax_23 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in eax : word32)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_17: (in qwArg00 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (word64 u0) (size_t u1))
T_18: (in __align : ptr64)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_19: (in signature of __align : void)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: 
T_20: (in  : word64)
  Class: Eq_20
  DataType: ptr64
  OrigDataType: 
T_21: (in fp : ptr64)
  Class: Eq_21
  DataType: ptr64
  OrigDataType: ptr64
T_22: (in 0x0000000000000008 : word64)
  Class: Eq_22
  DataType: int64
  OrigDataType: int64
T_23: (in fp + 0x0000000000000008 : word64)
  Class: Eq_20
  DataType: ptr64
  OrigDataType: ptr64
T_24: (in __align(fp + 0x0000000000000008) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in calloc : ptr64)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_30 (T_29, T_17)))
T_26: (in signature of calloc : void)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: 
T_27: (in num : size_t)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: 
T_28: (in size : size_t)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: 
T_29: (in 0x0000000000400660 : word64)
  Class: Eq_17
  DataType: int64
  OrigDataType: (union (word64 u0) (size_t u1))
T_30: (in calloc(0x0000000000400660, qwArg00) : (ptr void))
  Class: Eq_30
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_31: (in __hlt : ptr64)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 ()))
T_32: (in signature of __hlt : void)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_33: (in __hlt() : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in r8 : word64)
  Class: Eq_34
  DataType: word64
  OrigDataType: word64
T_35: (in 0x0000000000601040 : word64)
  Class: Eq_34
  DataType: word64
  OrigDataType: word64
T_36: (in r8 == 0x0000000000601040 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0x0000000000000000 : uint64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: uint64
T_38: (in 0x0000000000000000 : word64)
  Class: Eq_37
  DataType: uint64
  OrigDataType: word64
T_39: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in rsp_39 : word64)
  Class: Eq_40
  DataType: word64
  OrigDataType: word64
T_41: (in rbp_40 : word64)
  Class: Eq_41
  DataType: word64
  OrigDataType: word64
T_42: (in eax_41 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in rax_42 : word64)
  Class: Eq_43
  DataType: word64
  OrigDataType: word64
T_44: (in r8_43 : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_45: (in SCZO_44 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in Z_45 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in SZO_46 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in C_47 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in edi_48 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in rdi_49 : word64)
  Class: Eq_50
  DataType: word64
  OrigDataType: word64
T_51: (in eax : word32)
  Class: Eq_51
  DataType: Eq_51
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_52: (in 0x0000000000000000 : word64)
  Class: Eq_52
  DataType: word64
  OrigDataType: word64
T_53: (in 0x0000000000000000 : word64)
  Class: Eq_52
  DataType: word64
  OrigDataType: word64
T_54: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x0000000000000000 : uint64)
  Class: Eq_55
  DataType: uint64
  OrigDataType: uint64
T_56: (in 0x0000000000000000 : word64)
  Class: Eq_55
  DataType: uint64
  OrigDataType: word64
T_57: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in rsp_42 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in rsi_43 : word64)
  Class: Eq_59
  DataType: word64
  OrigDataType: word64
T_60: (in rbp_44 : word64)
  Class: Eq_60
  DataType: word64
  OrigDataType: word64
T_61: (in SCZO_45 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in rax_46 : word64)
  Class: Eq_62
  DataType: word64
  OrigDataType: word64
T_63: (in Z_47 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in SZO_48 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in C_49 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in rdi_50 : word64)
  Class: Eq_66
  DataType: word64
  OrigDataType: word64
T_67: (in eax_51 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in eax : word32)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_69: (in r8 : word64)
  Class: Eq_34
  DataType: word64
  OrigDataType: word64
T_70: (in 0000000000601040 : ptr64)
  Class: Eq_70
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_73 t0000)))
T_71: (in 0x0000000000000000 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in 0x0000000000601040 + 0x0000000000000000 : word64)
  Class: Eq_72
  DataType: ptr64
  OrigDataType: ptr64
T_73: (in Mem0[0x0000000000601040 + 0x0000000000000000:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in 0x00 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_75: (in globals->b601040 != 0x00 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in deregister_tm_clones : ptr64)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_78 (T_69)))
T_77: (in signature of deregister_tm_clones : void)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: 
T_78: (in deregister_tm_clones(r8) : void)
  Class: Eq_78
  DataType: void
  OrigDataType: void
T_79: (in 0x01 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0000000000601040 : ptr64)
  Class: Eq_80
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_83 t0000)))
T_81: (in 0x0000000000000000 : word64)
  Class: Eq_81
  DataType: word64
  OrigDataType: word64
T_82: (in 0x0000000000601040 + 0x0000000000000000 : word64)
  Class: Eq_82
  DataType: ptr64
  OrigDataType: ptr64
T_83: (in Mem13[0x0000000000601040 + 0x0000000000000000:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_84: (in register_tm_clones : ptr64)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (fn T_86 ()))
T_85: (in signature of register_tm_clones : void)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: 
T_86: (in register_tm_clones() : void)
  Class: Eq_86
  DataType: void
  OrigDataType: void
T_87: (in rax : (ptr void))
  Class: Eq_30
  DataType: (ptr void)
  OrigDataType: word64
T_88: (in esi : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in edi : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in calloc : ptr64)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_93 (T_91, T_92)))
T_91: (in (int64) edi : int64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (int64 u0) (size_t u1))
T_92: (in (int64) esi : int64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (int64 u0) (size_t u1))
T_93: (in calloc((int64) edi, (int64) esi) : (ptr void))
  Class: Eq_30
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_94: (in sil : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in rdi : (ptr byte))
  Class: Eq_95
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_98 t0000)))
T_96: (in 0x0000000000000000 : word64)
  Class: Eq_96
  DataType: word64
  OrigDataType: word64
T_97: (in rdi + 0x0000000000000000 : word64)
  Class: Eq_97
  DataType: word64
  OrigDataType: word64
T_98: (in Mem15[rdi + 0x0000000000000000:byte] : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_99: (in esi : int32)
  Class: Eq_99
  DataType: int32
  OrigDataType: int32
T_100: (in edi : int32)
  Class: Eq_100
  DataType: int32
  OrigDataType: int32
T_101: (in (uint64) edi : uint64)
  Class: Eq_101
  DataType: uint64
  OrigDataType: uint64
T_102: (in (word32) (uint64) edi : word32)
  Class: Eq_99
  DataType: int32
  OrigDataType: int32
T_103: (in (word32) (uint64) edi >= esi : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in (uint64) edi : uint64)
  Class: Eq_104
  DataType: uint64
  OrigDataType: uint64
T_105: (in (word32) (uint64) edi : word32)
  Class: Eq_105
  DataType: ui32
  OrigDataType: ui32
T_106: (in 0x00000001 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in (word32) (uint64) edi << 0x00000001 : word32)
  Class: Eq_107
  DataType: ui32
  OrigDataType: ui32
T_108: (in (uint64) ((word32) (uint64) edi << 0x00000001) : uint64)
  Class: Eq_108
  DataType: uint64
  OrigDataType: uint64
T_109: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000001) : word32)
  Class: Eq_109
  DataType: int32
  OrigDataType: int32
T_110: (in (uint64) esi : uint64)
  Class: Eq_110
  DataType: uint64
  OrigDataType: uint64
T_111: (in (word32) (uint64) esi : word32)
  Class: Eq_111
  DataType: ui32
  OrigDataType: ui32
T_112: (in 0x00000001 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in (word32) (uint64) esi << 0x00000001 : word32)
  Class: Eq_113
  DataType: ui32
  OrigDataType: ui32
T_114: (in (uint64) ((word32) (uint64) esi << 0x00000001) : uint64)
  Class: Eq_114
  DataType: uint64
  OrigDataType: uint64
T_115: (in (word32) (uint64) ((word32) (uint64) esi << 0x00000001) : word32)
  Class: Eq_109
  DataType: int32
  OrigDataType: int32
T_116: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000001) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000001)) : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in 0x00000003 : word32)
  Class: Eq_117
  DataType: int32
  OrigDataType: int32
T_118: (in edi *s 0x00000003 : int32)
  Class: Eq_118
  DataType: int32
  OrigDataType: int32
T_119: (in (uint64) (edi *s 0x00000003) : uint64)
  Class: Eq_119
  DataType: uint64
  OrigDataType: uint64
T_120: (in (word32) (uint64) (edi *s 0x00000003) : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_121: (in 0x00000003 : word32)
  Class: Eq_121
  DataType: int32
  OrigDataType: int32
T_122: (in esi *s 0x00000003 : int32)
  Class: Eq_122
  DataType: int32
  OrigDataType: int32
T_123: (in (uint64) (esi *s 0x00000003) : uint64)
  Class: Eq_123
  DataType: uint64
  OrigDataType: uint64
T_124: (in (word32) (uint64) (esi *s 0x00000003) : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_125: (in (word32) (uint64) (edi *s 0x00000003) >= (word32) ((uint64) (esi *s 0x00000003)) : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in (uint64) edi : uint64)
  Class: Eq_126
  DataType: uint64
  OrigDataType: uint64
T_127: (in (word32) (uint64) edi : word32)
  Class: Eq_127
  DataType: ui32
  OrigDataType: ui32
T_128: (in 0x00000002 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in (word32) (uint64) edi << 0x00000002 : word32)
  Class: Eq_129
  DataType: ui32
  OrigDataType: ui32
T_130: (in (uint64) ((word32) (uint64) edi << 0x00000002) : uint64)
  Class: Eq_130
  DataType: uint64
  OrigDataType: uint64
T_131: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000002) : word32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_132: (in (uint64) esi : uint64)
  Class: Eq_132
  DataType: uint64
  OrigDataType: uint64
T_133: (in (word32) (uint64) esi : word32)
  Class: Eq_133
  DataType: ui32
  OrigDataType: ui32
T_134: (in 0x00000002 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in (word32) (uint64) esi << 0x00000002 : word32)
  Class: Eq_135
  DataType: ui32
  OrigDataType: ui32
T_136: (in (uint64) ((word32) (uint64) esi << 0x00000002) : uint64)
  Class: Eq_136
  DataType: uint64
  OrigDataType: uint64
T_137: (in (word32) (uint64) ((word32) (uint64) esi << 0x00000002) : word32)
  Class: Eq_131
  DataType: int32
  OrigDataType: int32
T_138: (in (word32) (uint64) ((word32) (uint64) edi << 0x00000002) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x00000002)) : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in (uint64) edi : uint64)
  Class: Eq_139
  DataType: uint64
  OrigDataType: uint64
T_140: (in (word32) (uint64) edi : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in (uint64) (word32) (uint64) edi : uint64)
  Class: Eq_141
  DataType: uint64
  OrigDataType: uint64
T_142: (in (word32) (uint64) (word32) (uint64) edi : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in (int64) (word32) (uint64) (word32) (uint64) edi : int64)
  Class: Eq_143
  DataType: int64
  OrigDataType: int64
T_144: (in 0x00000002 : word32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_145: (in (int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002 : word32)
  Class: Eq_145
  DataType: int32
  OrigDataType: int32
T_146: (in (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : int32)
  Class: Eq_146
  DataType: int32
  OrigDataType: int32
T_147: (in (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : uint64)
  Class: Eq_147
  DataType: uint64
  OrigDataType: uint64
T_148: (in (word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) : word32)
  Class: Eq_148
  DataType: int32
  OrigDataType: int32
T_149: (in (uint64) esi : uint64)
  Class: Eq_149
  DataType: uint64
  OrigDataType: uint64
T_150: (in (word32) (uint64) esi : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in (uint64) (word32) (uint64) esi : uint64)
  Class: Eq_151
  DataType: uint64
  OrigDataType: uint64
T_152: (in (word32) (uint64) (word32) (uint64) esi : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in (int64) (word32) (uint64) (word32) (uint64) esi : int64)
  Class: Eq_153
  DataType: int64
  OrigDataType: int64
T_154: (in 0x00000002 : word32)
  Class: Eq_154
  DataType: int32
  OrigDataType: int32
T_155: (in (int64) (word32) (uint64) (word32) (uint64) esi / 0x00000002 : word32)
  Class: Eq_155
  DataType: int32
  OrigDataType: int32
T_156: (in (int32) ((int64) (word32) (uint64) (word32) (uint64) esi / 0x00000002) : int32)
  Class: Eq_148
  DataType: int32
  OrigDataType: int32
T_157: (in (word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x00000002) >= (int32) ((int64) ((word32) ((uint64) ((word32) ((uint64) esi)))) / 0x00000002) : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in free : ptr64)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_168 (T_167)))
T_159: (in signature of free : void)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: 
T_160: (in p : (ptr void))
  Class: Eq_160
  DataType: (ptr void)
  OrigDataType: 
T_161: (in my1 : ptr64)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (fn T_167 (T_164, T_166)))
T_162: (in signature of my1 : void)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: 
T_163: (in (uint64) esi : uint64)
  Class: Eq_163
  DataType: uint64
  OrigDataType: uint64
T_164: (in (word32) (uint64) esi : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_165: (in (uint64) edi : uint64)
  Class: Eq_165
  DataType: uint64
  OrigDataType: uint64
T_166: (in (word32) (uint64) edi : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_167: (in my1((word32) (uint64) esi, (word32) (uint64) edi) : word64)
  Class: Eq_160
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_168: (in free(my1((word32) (uint64) esi, (word32) (uint64) edi)) : void)
  Class: Eq_168
  DataType: void
  OrigDataType: void
T_169: (in r8 : word64)
  Class: Eq_169
  DataType: word64
  OrigDataType: word64
T_170: (in __llvm_retpoline_r11 : ptr64)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: (ptr (fn T_172 ()))
T_171: (in signature of __llvm_retpoline_r11 : void)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: 
T_172: (in __llvm_retpoline_r11() : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
T_173: (in __llvm_retpoline_r11 : ptr64)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: (ptr (fn T_174 ()))
T_174: (in __llvm_retpoline_r11() : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
T_175: (in puts : ptr64)
  Class: Eq_175
  DataType: (ptr Eq_175)
  OrigDataType: (ptr (fn T_179 (T_178)))
T_176: (in signature of puts : void)
  Class: Eq_175
  DataType: (ptr Eq_175)
  OrigDataType: 
T_177: (in s : (ptr char))
  Class: Eq_177
  DataType: (ptr char)
  OrigDataType: 
T_178: (in 0x00000000004007A8 : uint64)
  Class: Eq_177
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_179: (in puts("done\n") : int32)
  Class: Eq_179
  DataType: int32
  OrigDataType: int32
T_180: (in free : ptr64)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_184 (T_183)))
T_181: (in fp : ptr64)
  Class: Eq_181
  DataType: ptr64
  OrigDataType: ptr64
T_182: (in 0x0000000000000028 : word64)
  Class: Eq_182
  DataType: ui64
  OrigDataType: ui64
T_183: (in fp - 0x0000000000000028 : word64)
  Class: Eq_160
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_184: (in free(fp - 0x0000000000000028) : void)
  Class: Eq_168
  DataType: void
  OrigDataType: void
T_185: (in fn0000000000400700 : ptr64)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: (ptr (fn T_189 (T_188)))
T_186: (in signature of fn0000000000400700 : void)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: 
T_187: (in qwArg00 : word64)
  Class: Eq_187
  DataType: word64
  OrigDataType: word64
T_188: (in qwLoc08 : word64)
  Class: Eq_187
  DataType: word64
  OrigDataType: word64
T_189: (in fn0000000000400700(qwLoc08) : void)
  Class: Eq_189
  DataType: void
  OrigDataType: void
T_190: (in edi : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in _init : ptr64)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: (ptr (fn T_193 ()))
T_192: (in signature of _init : void)
  Class: Eq_191
  DataType: (ptr Eq_191)
  OrigDataType: 
T_193: (in _init() : void)
  Class: Eq_193
  DataType: void
  OrigDataType: void
T_194: (in 0000000000600E18 : ptr64)
  Class: Eq_194
  DataType: Eq_194
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_195: (in 0000000000600E10 : ptr64)
  Class: Eq_195
  DataType: Eq_195
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_196: (in 0x0000000000600E18 - 0x0000000000600E10 : word64)
  Class: Eq_196
  DataType: int64
  OrigDataType: int64
T_197: (in 0x0000000000000003 : word64)
  Class: Eq_197
  DataType: word64
  OrigDataType: word64
T_198: (in 0x0000000000600E18 - 0x0000000000600E10 >> 0x0000000000000003 : word64)
  Class: Eq_198
  DataType: int64
  OrigDataType: int64
T_199: (in 0x0000000000000000 : word64)
  Class: Eq_198
  DataType: int64
  OrigDataType: word64
T_200: (in 0x0000000000600E18 - 0x0000000000600E10 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in rsp_72 : word64)
  Class: Eq_201
  DataType: word64
  OrigDataType: word64
T_202: (in r15_73 : word64)
  Class: Eq_202
  DataType: word64
  OrigDataType: word64
T_203: (in r14_74 : word64)
  Class: Eq_203
  DataType: word64
  OrigDataType: word64
T_204: (in r15d_75 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in edi_76 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in r13_77 : word64)
  Class: Eq_206
  DataType: word64
  OrigDataType: word64
T_207: (in r12_78 : word64)
  Class: Eq_207
  DataType: word64
  OrigDataType: word64
T_208: (in rbp_79 : word64)
  Class: Eq_208
  DataType: word64
  OrigDataType: word64
T_209: (in rbx_80 : word64)
  Class: Eq_209
  DataType: word64
  OrigDataType: word64
T_210: (in rsi_81 : word64)
  Class: Eq_210
  DataType: word64
  OrigDataType: word64
T_211: (in rdx_82 : word64)
  Class: Eq_211
  DataType: word64
  OrigDataType: word64
T_212: (in SCZO_83 : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in SZO_84 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in C_85 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in Z_86 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in ebx_87 : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in rdi_88 : word64)
  Class: Eq_217
  DataType: word64
  OrigDataType: word64
T_218: (in 0000000000600E10 : ptr64)
  Class: Eq_218
  DataType: (ptr Eq_221)
  OrigDataType: (ptr (struct (0 T_221 t0000)))
T_219: (in 0x0000000000000000 : word64)
  Class: Eq_219
  DataType: word64
  OrigDataType: word64
T_220: (in 0x0000000000600E10 + 0x0000000000000000 : word64)
  Class: Eq_220
  DataType: ptr64
  OrigDataType: ptr64
T_221: (in Mem0[0x0000000000600E10 + 0x0000000000000000:word32] : word32)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_222: (in 0x0000000000000001 : word64)
  Class: Eq_222
  DataType: word64
  OrigDataType: word64
T_223: (in rbx_80 + 0x0000000000000001 : word64)
  Class: Eq_208
  DataType: word64
  OrigDataType: word64
T_224: (in rbp_79 != rbx_80 + 0x0000000000000001 : bool)
  Class: Eq_224
  DataType: bool
  OrigDataType: bool
*/
typedef union Eq_221 {
	word32 u0;
	<anonymous> * u1;
}struct Globals {
	char str4007A8[];	// 4007A8
	union Eq_221 u600E10;	// 600E10
	word64 qw600FF8;	// 600FF8
	byte b601040;	// 601040
} Eq_1;

typedef union Eq_16 {
	word32 u0;
	<anonymous> * u1;
} Eq_16;

typedef union Eq_17 {
	int64 u0;
	size_t u1;
} Eq_17;

typedef void (Eq_18)(ptr64);

typedef void (Eq_25)(Eq_17, Eq_17);

typedef void (Eq_31)();

typedef union Eq_51 {
	word32 u0;
	<anonymous> * u1;
} Eq_51;

typedef union Eq_68 {
	word32 u0;
	<anonymous> * u1;
} Eq_68;

typedef void (Eq_76)(word64);

typedef void (Eq_84)();

typedef void (Eq_158)(void);

typedef void (Eq_161)(word32, word32);

typedef void (Eq_170)();

typedef int32 (Eq_175)(char *);

typedef void (Eq_185)(word64);

typedef void (Eq_191)();

typedef union Eq_194 {
	int64 u0;
	ptr64 u1;
} Eq_194;

typedef union Eq_195 {
	int64 u0;
	ptr64 u1;
} Eq_195;

typedef union Eq_221 {
	word32 u0;
	<anonymous> * u1;
} Eq_221;
