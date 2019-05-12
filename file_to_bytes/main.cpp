#include "includes.hpp"

BOOL main( int arg_number, char* arguments[] )
{
	try
	{
		/// Check if the program was called with the correct syntax
		/// arg number 1 = current file path
		/// arg number 2 = destination file path
		if ( arg_number != 2 )
			throw std::exception( "Wrong syntax, be sure to only drop the file onto the .exe" );

		/// Open the file 
		auto file = std::ifstream( arguments[ 1 ], std::ios::binary );
		if ( !file.is_open() )
			throw std::exception( "Failed to open input file" );

		/// Read all bytes (https://en.cppreference.com/w/cpp/iterator/istreambuf_iterator)
		std::vector<uint8_t> bytes( (
			std::istreambuf_iterator<char>( file ) ),
			std::istreambuf_iterator<char>() );

		/// We no longer need the file, so close it
		file.close();

		/// Open output and clear it on open
		auto out = std::ofstream( "out.txt", std::ofstream::out | std::ofstream::trunc );
		if ( !out.is_open() )
			throw std::exception( "Failed to open output file" );

		out << "static std::array<byte, " << bytes.size() << "> arr = " << std::endl <<
			"{" << "\t";

		/// Go through all stored bytes and print them
		for ( auto i = 0u; i < bytes.size(); i++ )
		{
			/// New line after 16 bytes represented
			if ( i % 16 == 0 )
			{
				out << std::endl;
				out << "\t";
			}

			out << std::showbase << std::hex << static_cast< int16_t >( bytes.at( i ) ) << ", ";
		}

		out << std::endl << "};";

		/// Close output file
		out.close();
	}
	catch ( std::exception & ex )
	{
		MessageBoxA( NULL, ex.what(), "Error", MB_OK | MB_ICONERROR );

		return TRUE;
	}

	return TRUE;
}